import java.util.Scanner;

public class Palindrome {

    static boolean CheckPal(int in, int fin, String s) {
        if (in>=fin) {
            return true;
        }

        if(s.charAt(in)!=s.charAt(fin)) {
            return false;
        }

        return (CheckPal(+1, fin-1, s));

    }


    public static main(Strin[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Inserisci una parola: ");
        String s=scanner.nextLine();
        if(CheckPal(0, s.length()-1, s)==true) {
            System.out.println("La parola è palindroma");
            
        }
        else {
            System.out.println("La parola non è palindroma");
        };
        sc.close();
    }
    
}
