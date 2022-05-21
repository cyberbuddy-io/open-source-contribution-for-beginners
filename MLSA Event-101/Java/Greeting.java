import java.util.*;
public class Greeting{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        String a;
        System.out.println("Enter your name please : ");
        a=s.nextLine();
        System.out.println("Hi ,"+a+" how are you ?");
        s.close();
    }
}