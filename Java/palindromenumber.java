
import java.util.Scanner;

public class palindromenumber {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter number");
        int n = sc.nextInt();
        int rev = 0;
        int s=n;
        while (n != 0) {
            int digit = n % 10;
            rev = rev * 10 + digit;
            n = n / 10;
        }
        if (s == rev) {
            System.out.println("palindrone number");
        } else {
            System.out.println("not a palindrone");
        }
    }
}
