import java.util.*;
public class Ex8 {
    public static void main(String[] args) {
        System.out.println("Check if entered number is greater than the computer's number True for greater and False for lesser ");
        int a,b=9;
        Scanner s =new Scanner(System.in);
        System.out.print("Enter a number : ");
        a=s.nextInt();
        System.out.println(a>b);
        s.close();
    }
}
