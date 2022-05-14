import java.io.IOException;
import java.io.PrintStream;
import java.net.Socket;
import java.net.UnknownHostException;
import java.util.Scanner;

public class Network2 {
    public static void main(String[] args) throws UnknownHostException, IOException {
        Scanner sc=new Scanner(System.in);
        Socket s=new Socket("127.0.0.1",8080);
        Scanner sc1=new Scanner(s.getInputStream());
        System.out.print("Enter any number: ");
        int number =sc.nextInt();
        PrintStream p=new PrintStream(s.getOutputStream());
        p.println(number);

        int temp=sc1.nextInt();
        System.out.println(temp);
        sc.close();
        s.close();
    }
}
