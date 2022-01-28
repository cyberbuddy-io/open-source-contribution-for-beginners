import java.util.*;
public class Ex4 {
    public static void main(String[] args) {
        Scanner s =new Scanner(System.in);
        float k;
        System.out.print("Enter the kilometers : ");
        k=s.nextFloat();
        float m= 0.62137f*k;
        System.out.print(k+" in miles are "+m);
        s.close();
    }
}
