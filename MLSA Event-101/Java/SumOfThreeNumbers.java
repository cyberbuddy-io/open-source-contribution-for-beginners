import java.util.*;
public class SumOfThreeNumbers {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        int a,b,c,sum;
        System.out.print("Enter first number : ");
        a=sc.nextInt();
        System.out.print("Enter second number : ");
        b=sc.nextInt();
        System.out.print("Enter third number : ");
        c=sc.nextInt();
        sum=a+b+c;
        System.out.println("The sum of three numbers is : "+sum);
        sc.close();
    }
}
