import java.util.*;

public class PrimeNumber {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int p;
        System.out.print("Enter number to check whether it is prime or not : ");
        p=s.nextInt();
        if(p==1){
            System.out.println("It is Prime !!");
        }
        else if(p==2){
            System.out.println("It is Prime !!");
        }
        for(int i=2;i<p;i++){
            if(p%i==0){
                System.out.println("Not Prime !!");
                break;
            }
            else{
                System.out.println("Prime !!");
                break;
            }
        }
        s.close();
    }
}
