import java.util.*;
public class SumOfNumbers {
    static void sumOfNumbers(){
        Scanner sc=new Scanner(System.in);
        int a,sum=0;
        System.out.print("Enter number upto which you want to add the natural numbers : ");
        a=sc.nextInt();
        for(int i=0;i<=a;i++){
            sum+=i;
        }
        System.out.println("The sum of numbers upto "+a+" is "+sum);
        sc.close();
    }
    public static void main(String[] args) {
        sumOfNumbers();
    }
}
