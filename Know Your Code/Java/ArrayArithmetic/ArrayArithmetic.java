package ArrayArithmetic;

import java.awt.*;
import java.util.HashMap;
import java.util.Map;

/**
 * The class ArrayArithmetic contains methods for performing basic numeric operations
 * using an array of {@code int}.
 * such as:
 * <li>Finding the maximum element, Finding the minimum element, Finding the sum of all elements etc.</li>
 *
 * @author James k.
 * @since 1.0.
 */
public class ArrayArithmetic {
    private static int result;

    private ArrayArithmetic() {
    }

    /**
     * Returns the first two indices in the array which sums up to {@code KEY} as a {@link Point}.
     *
     * @param values array of integers.
     * @param KEY    sum value to check for.
     * @return the result as a {@link Point} with the first index as x and second as y. Otherwise, return null.
     * @Note: In cases where multiply indices might sum to {@code KEY}, only the first two indices will be applied.
     */
    public static Point sumToKey(int[] values, int KEY) {
        if (values == null || values.length == 0) {
            if (values == null) throw new IllegalStateException("Array is null");
            throw new IllegalArgumentException("Array is empty");
        } else if (values.length >= 2) {
            Map<Integer, Integer> map = new HashMap<>();
            map.put(values[0], 0);
            for (int i = 1; i < values.length; i++) {
                int complement = KEY - values[i];
                if (map.containsKey(complement))
                    return new Point(map.get(complement), i);
                map.put(values[i], i);
            }
        }
        return null;
    }

    /**
     * Finds the index of the maximum element in a given array {@code values}.
     *
     * @param values an array of integers
     * @return the position of the maximum element.
     */
    public static int findMax(int[] values) {
        if (values == null || values.length == 0) {
            if (values == null) throw new IllegalStateException("Array is null");
            throw new IllegalArgumentException("Array is empty");
        }
        int max = values[0];
        result = 0;
        for (int i = 1; i < values.length; i++)
            if (values[i] > max) {
                max = values[i];
                result = i;
            }
        return result;
    }

    /**
     * Finds the index of the minimum element in a given array {@code values}.
     *
     * @param values an array of integers
     * @return the position of the minimum element.
     */
    public static int findMin(int[] values) {
        if (values == null || values.length == 0) {
            if (values == null) throw new IllegalStateException("Array is null");
            throw new IllegalArgumentException("Array is empty");
        }
        int max = values[0];
        result = 0;
        for (int i = 1; i < values.length; i++)
            if (values[i] < max) {
                max = values[i];
                result = i;
            }
        return result;
    }

    /**
     * Adds up all the values in a given array and return the sum as an integer.
     *
     * @param values an array of integers
     * @return the sum total of values.
     */
    public static int findSum(int[] values) {
        if (values == null || values.length == 0) {
            if (values == null) throw new IllegalStateException("Array is null");
            throw new IllegalArgumentException("Array is empty");
        }
        result = 0;
        for (int j : values) {
            result += j;
        }
        return result;
    }

    public double findAverage(int[] values) {
        if (values == null || values.length == 0) {
            if (values == null) throw new IllegalStateException("Array is null");
            throw new IllegalArgumentException("Array is empty");
        }
        return (double) findSum(values) / values.length;
    }
}
