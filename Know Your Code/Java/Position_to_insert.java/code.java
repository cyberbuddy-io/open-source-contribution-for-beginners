import java.util.Arrays;
public class GFG {
    public static void main(String[] args)
    {
        int[] arr = new int[] { 1, 3, 4, 5, 6 };
  
        // 2 has to be inserted
        
        int pos = Arrays.binarySearch(arr, 2);
        System.out.print("Element has to be inserted at: "
                                                  + ~pos);
    }
}
