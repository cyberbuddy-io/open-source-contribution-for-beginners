import java.util.*;
public class Ex16 {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        byte a,b,c;
        float avg;
        System.out.print("Enter your physics marks : ");
        a=s.nextByte();
        System.out.print("Enter your mathematics marks : ");
        b=s.nextByte();
        System.out.print("Enter your chemistry marks : ");
        c=s.nextByte();
        avg=(a+b+c)/3.0f;
        if(avg>=40 && a>33 && b>33 && c>33){
            System.out.println("Congrats , you have been promoted !!");
            System.out.println("Your percentage marks are "+avg+"%");
        }
        else{
            System.out.println("Sorry , you have not been promoted !!");
        }
        s.close();
    }
}
