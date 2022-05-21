import java.util.*;
public class Rectangle{
    public static void sides(float l,float b){
        System.out.println("The length of rectangle is "+l);
        System.out.println("The length of breadth is "+b);
    }
    public static void area(float l,float b){
        System.out.println("The area of rectangle is "+l*b);
    }
    public static void perimeter(float l,float b){
        System.out.println("The perimeter of rectangle is "+2*(l+b));
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        float length,breadth;
        System.out.print("Enter the length of rectangle: ");
        length=sc.nextFloat();
        System.out.print("Enter the breadth of rectangle: ");
        breadth=sc.nextFloat();
        sides(length, breadth);
        area(length, breadth);
        perimeter(length, breadth);
        sc.close();
    }
}