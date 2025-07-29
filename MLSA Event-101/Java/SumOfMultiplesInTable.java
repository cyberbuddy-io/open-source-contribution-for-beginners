import java.util.*;
public class SumOfMultiplesInTable {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        System.out.print("Enter the number whose multiples you want to add: ");
        int a=s.nextInt();
        System.out.print("Enter the number upto which you want to add the multiples: ");
        int n=s.nextInt();
        int sum=0;
        for(int i=1;i<=n;i++){
            sum=sum+(a*i);
        }
        System.out.println("The sum of mulitples of "+a+" upto "+n+" is "+sum);
        s.close();
    }
}
