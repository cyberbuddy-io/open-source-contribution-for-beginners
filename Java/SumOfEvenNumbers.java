import java.util.*;
public class SumOfEvenNumbers {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int n,i=0,sum=0;
        System.out.print("Enter a number upto which you want the sum of even numbers: ");
        n=s.nextInt();
        while(i<n){
            if(i%2==0){
                sum+=i;
                i++;
            }
            else{
                i++;
                continue;
            }
        }
        System.out.println("The total sum of even numbers upto "+n+" is "+sum);
        s.close();
    }
}
