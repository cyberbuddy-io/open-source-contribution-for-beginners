
public class BubbleSort {
    public static void main(String[]args){
        int[] array = {8,6,4,3,8,6,5,8,9,15,2};
        sort(array);

        // just prints the result
        for (int value: array) {
            System.out.print(value + " - ");
        }
    }

    /**
     * Reordenate the given array
     */
    public static int[] sort(int[] array) {
        int aux;
        // iterate the array and verify for each element if is greater than, if yes, change their positions
        for (int i = 0; i < array.length; i++) {
            for (int j = 0; j < array.length; j++) {
                if(array[i] < array[j]) {
                    aux = array[i];
                    array[i] = array[j];
                    array[j] = aux;
                }
            }
        }
        return array;
    }
}