
import java.util.Scanner;

public class armstrong {

    public static void main(String[] args) {
        int count = 0, b, sum = 0;
        Scanner sc = new Scanner(System.in);
        System.out.println("enter number");
        int n = sc.nextInt();
        int a = n;
        int c = n;
        while (a > 0) {
            a = a / 10;
            count++;
        }
        while (n > 0) {
            b = n % 10;
            sum = (int) (sum + Math.pow(b, count));
            n = n / 10;
        }
        if (sum == c) {
            System.out.println("given number is armstrong");
        } else {
            System.out.println("given number is not armstrong");
        }

    }
}
