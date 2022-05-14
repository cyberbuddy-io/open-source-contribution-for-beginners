import java.util.*;
public class CheckLeapYear {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int a;
        System.out.print("Enter the year : ");
        a=s.nextInt();
        if(a%4==0)
        {
            System.out.println("This is a leap year!!");
        }
        else
        {
            System.out.println("This is not a leap year!!");
        }
        s.close();
    }
}
