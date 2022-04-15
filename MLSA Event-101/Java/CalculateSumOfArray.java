import java.util.*;
class CalculateSumOfArray{
    public static void main(String [] args){
        Scanner s=new Scanner(System.in);
        int []a=new int[4];
        System.out.println("Enter elements of an array");
        int sum=0;
        for(int i=0;i<4;i++){
            a[i]=s.nextInt();
            sum+=a[i];
        }
        System.out.println("the sum of elements of an array is "+sum);
        s.close();
    }
}