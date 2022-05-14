

import java.util.*;
public class Square{
    public static void  side(float s){
       System.out.println("The side of square is "+s);
    }
    public static void area(float s){
        System.out.println("The area of square is "+Math.pow(s,2));
    }
    public static void perimeter(float s){
        System.out.println("The perimeter of square is "+4*s);
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        float side;
        System.out.print("Enter the side of a square : ");
        side=sc.nextFloat();
        side(side);
        area(side);
        perimeter(side);
        sc.close();
    }
}