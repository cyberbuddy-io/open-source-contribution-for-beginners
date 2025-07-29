import java.io.IOException;
import java.io.PrintStream;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.Scanner;

public class Network3 {
    public static void main(String[] args) throws IOException {
        ServerSocket s1=new ServerSocket(8080);
        Socket ss=s1.accept();
        Scanner sc=new Scanner(ss.getInputStream());
        int number=sc.nextInt();
        int temp=number*2;
        PrintStream p=new PrintStream(ss.getOutputStream());
        p.println(temp);
        sc.close();
        ss.close();
        s1.close();
    }
}
