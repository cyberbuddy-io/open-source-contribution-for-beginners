import java.util.*;
public class CheckIfIntegerIsEntered {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        System.out.print("Enter an interger number : ");
        s.hasNextInt();
        System.out.print(s.hasNextInt());
        s.close();
    }
}
