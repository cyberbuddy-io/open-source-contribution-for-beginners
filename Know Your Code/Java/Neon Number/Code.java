import java.io.*;
 
class Neon {
    // function to check Neon Number
    static boolean checkNeon(int x)
    {
        // storing the square of x
        int sq = x * x;
 
        // calculating the sum of digits
        // of sq
        int sum_digits = 0;
        while (sq != 0) {
            sum_digits = sum_digits + sq % 10;
            sq = sq / 10;
        }
        return (sum_digits == x);
    }
 
    // Driver Code
    public static void main(String args[])
                        throws IOException
    {
        // Printing Neon Numbers upto 10000
        for (int i = 1; i <= 10000; i++)
            if (checkNeon(i))
                System.out.print(i + " ");       
    }
}