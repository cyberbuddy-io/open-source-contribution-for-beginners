import java.util.*;
public class AverageMarks {
    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        int [] a=new int[5];
        int sum=0;
        System.out.println("Enter marks of physics");
        for(int elements:a){
            elements=sc.nextInt();
            sum+=elements;
        }
        System.out.println();
        System.out.println("The average physics marks is "+sum/a.length);
        sc.close();
    }
}
