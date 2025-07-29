import java.util.*;
public class NthTermOfFibonacciSeries {
    static int fibonacci(int s) {
     if(s<=1){
         return 1;
     }
     else{
         return fibonacci(s-1)+fibonacci(s-2);
     }
}

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a;
        System.out.print("Enter the term whose fibonacci you want to see : ");
        a = sc.nextInt();
       System.out.println(fibonacci(a)); 
        sc.close();
    }
}
