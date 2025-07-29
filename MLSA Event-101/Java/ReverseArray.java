import java.util.*;
public class ReverseArray {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int [] a={3,4,65,76,89};
        for(int i=a.length-1;i>=0;i--){
            System.out.println(a[i]);
        }
        sc.close();
    }
}
