import java.util.Scanner;
public class UserInput {
    public static void main(String[] args) {
        System.out.println("Welcome !!\nLets take input from User");
        Scanner sc = new Scanner(System.in);
        // System.out.println("Enter number 1 ");
        // int a=sc.nextInt();
        // System.out.println("Enter number 2 ");
        // int b=sc.nextInt();
        // // boolean b1= sc.hasNextInt();
        // // System.out.println(b1);
        // // int b=sc.nextFloat();
        // int sum=a+b;
        // System.out.println("The sum of number is "+sum);
        // String str= sc.next();
        String str= sc.nextLine();
        System.out.print(str);
        
        sc.close();
    }
}
