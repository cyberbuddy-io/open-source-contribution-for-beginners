import java.util.*;
public class DetectDoubleOrTripleWhitespaces {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter a String containing double or tripple whitepaces : ");
        String st=s.nextLine();
        System.out.println("Double whitespaces in your string is present at \""+st.indexOf("  ")+"\"");
        System.out.println("Double whitespaces in your string is alse present at \""+st.indexOf("  ",5)+"\"");
        s.close();
    }
}
