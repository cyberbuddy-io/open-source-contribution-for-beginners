import java.util.*;
public class ReverseTable {
    public static void main(String[] args) {
        System.out.println("\t\t\t\t\t\t\t<----------  TABLE  ---------->");
        Scanner s=new Scanner(System.in);
        int n,a;
        System.out.print("\t\t\t\t\t\tEnter a number whose reverse table you want to see : ");
        a=s.nextInt();
        System.out.print("\t\t\t\t\t\tEnter a number upto which you want to see the table : ");
        n=s.nextInt();
        for(int i=n;i>=1;i--){
            System.out.println("\t\t\t\t\t\t\t\t"+a+"  *  "+i+"  ==>  "+a*i);
        }
        s.close();
    }
}
