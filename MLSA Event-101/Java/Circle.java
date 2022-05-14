import java.util.*;
public class Circle {
    public static void radius(float r){
        System.out.println("The radius of circle is "+r);
        System.out.println("The diameter of circle is "+r/2);
    }
    public static void area(float r){
        System.out.println("the area of a circle is "+3.14*(Math.pow(r, 2)));
    }
    public static void perimeter(float r){
        System.out.println("The perimeter of circle is "+String.format("%.2f",(2*3.14f*r)));
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        float r;
        System.out.print("enter the radius of a circle: ");
        r=sc.nextFloat();
        radius(r);
        area(r);
        perimeter(r);
        sc.close();
    }
}
