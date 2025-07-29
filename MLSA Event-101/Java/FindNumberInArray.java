import java.util.*;
public class FindNumberInArray {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int []a={2,45,23,46,76};
        int n,c=0;
        System.out.println("Enter a number to find in array");
        n=sc.nextInt();
        for(int elements:a){
            if(n==elements){
                System.out.println("Found "+n);
                break;
            }
            else{
               c+=1;
            }
            if(c==a.length){
                System.out.println("Not Found !!");
            }
        }
    sc.close();
    }
}
