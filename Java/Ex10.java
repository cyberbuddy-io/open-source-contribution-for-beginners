import java.util.*;
public class Ex10 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter a String containing whitepaces : ");
        String st=s.nextLine();
        System.out.println("Your Entered string after replacing  is \""+st.replace(" ", "_")+"\"");
        s.close();
    }
}
