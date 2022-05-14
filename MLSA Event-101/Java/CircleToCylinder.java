import java.util.*;
class Circlee{
    float r;
    public Scanner sc=new Scanner(System.in);
    public void getR(){
        System.out.print("Enter the radius of circle : ");
        r=sc.nextFloat();
    }
    public void areaaa(){
        System.out.println("The area of circle is: "+3.14*Math.pow(r, 2));
        sc.close();
    }
}
class Cylinderr extends Circlee{
    float h;
    public Scanner ssc=new Scanner(System.in);
    public void  setR(){
        System.out.print("Enter the height of the cylinder: ");
        h=ssc.nextFloat();
        ssc.close();
        System.out.println();
        System.out.println("The height of cylinder is: "+h);
        System.out.println("The radius of cylinder is: "+r);
        System.out.println();
        System.out.println("The surface area of the Cylinder is: "+Math.round(((2f*3.14f*r*h)+(2f*3.14f*(Math.pow(r,2))))));
    }
}
public class CircleToCylinder {
    public static void main(String[] args) {
        Cylinderr c=new Cylinderr();
        c.getR();
        System.out.println();
        System.out.println("The radius of circle is: "+c.r);
        System.out.println();
        c.setR();

    }
}
