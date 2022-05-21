import java.util.*;
public class Gpa {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        float a,b,c,gpa;
        System.out.print("Enter your Maths Marks: ");
        a=s.nextFloat();
        System.out.print("Enter your science Marks: ");
        b=s.nextFloat();
        System.out.print("Enter your English Marks: ");
        c=s.nextFloat();
        gpa=(((a/100)*4)+((b/100)*4)+((c/100)*4));
        System.out.print("Your total GPA is : "+gpa);
        s.close();
    }
}
