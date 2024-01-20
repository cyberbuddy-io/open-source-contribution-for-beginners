import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Random;

class RandomizedCollection {
    private List<Integer> values;
    private Map<Integer, List<Integer>> indices;
    private Random random;

    public RandomizedCollection() {
        values = new ArrayList<>();
        indices = new HashMap<>();
        random = new Random();
    }

    public boolean insert(int val) {
        values.add(val);
        indices.computeIfAbsent(val, k -> new ArrayList<>()).add(values.size() - 1);
        return indices.get(val).size() == 1; // Returns true if the item is not present, false otherwise.
    }

    public boolean remove(int val) {
        if (!indices.containsKey(val) || indices.get(val).isEmpty()) {
            return false;
        }

        int lastValue = values.get(values.size() - 1);
        int lastIdx = values.size() - 1;
        int removeIdx = indices.get(val).remove(indices.get(val).size() - 1);

        if (removeIdx != lastIdx) {
            values.set(removeIdx, lastValue);

            // Updates the index of the lastValue in the map
            List<Integer> lastValueIndices = indices.get(lastValue);
            lastValueIndices.remove(Integer.valueOf(lastIdx));
            lastValueIndices.add(removeIdx);
        }

        values.remove(lastIdx);

        if (indices.get(val).isEmpty()) {
            indices.remove(val);
        }

        return true;
    }

    public int getRandom() {
        int randomIdx = random.nextInt(values.size());
        return values.get(randomIdx);
    }
}

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection obj = new RandomizedCollection();
 * boolean param_1 = obj.insert(val);
 * boolean param_2 = obj.remove(val);
 * int param_3 = obj.getRandom();
 */
