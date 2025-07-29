import java.util.*;
public class JavaMethodForTable {
    static void table(){
        int a,n;
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter number whose table you want to see : ");
        a=sc.nextInt();
        System.out.print("Enter a number upto which you want the multiplication: ");
        n=sc.nextInt();
        System.out.println();
        for(int i=1;i<=n;i++){
            System.out.println(a + " * "+ i + " = " + a*i);
        }
        sc.close();
    }
    public static void main(String[] args) {
        table();
    }
}
