import java.util.*;
class Rectanglee{
    float l,b;
    public Scanner s=new Scanner(System.in);
    public void lengthAndBreadth(){
        System.out.print("Enter the length of the rectangle: ");
        l=s.nextFloat();
        System.out.print("Enter the breadth of the rectangle : ");
        b=s.nextFloat();
        s.close();
    }
    public void Areaa(){
        System.out.println();
        System.out.println("The area of the rectanglee is : "+l*b);
    }
}
class Cuboid extends Rectanglee{
    public void display(){
        float w=10;
        System.out.println();
        System.out.println();
        System.out.println("The width of the cuboid is: "+w);
        System.out.println("The breadth of the cuboid is: "+b);
        System.out.println("The length of the cuboid is: "+l);
        System.out.println();
        System.out.println("The area of the cuboid is: "+Math.round(((2*l*w)+(2*l*b)+(2*b*w))));
    }
}
public class RectangelToCuboid {
    public static void main(String[] args) {
        Cuboid c=new Cuboid();
        c.lengthAndBreadth();
        System.out.println();
        System.out.println("The length of the Rectangle is: "+c.l);
        System.out.println("The breadth of the Rectangle is: "+c.b);
        System.out.println();
        c.display();
    }
}
