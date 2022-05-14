import java.util.*;
public class StringReplacement2 {
    public static void main(String[] args) {
        Scanner s =new Scanner(System.in);
        String letter = "Dear <|name|> , thanks a lot.";
        System.out.println(letter.replace("|name|", " Sukhmeet "));
        s.close();
    }
}
