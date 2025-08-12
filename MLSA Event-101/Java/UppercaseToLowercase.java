import java.util.*;
public class UppercaseToLowercase {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter a String : ");
        String st=s.nextLine();
        System.out.println("Your Entered string in lower character is \""+st.toLowerCase()+"\"");
        s.close();
    }
}
