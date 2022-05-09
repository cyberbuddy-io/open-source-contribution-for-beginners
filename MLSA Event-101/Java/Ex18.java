import java.util.*;
public class Ex18 {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        byte day;
        System.out.print("Enter the day of the week : ");
        day=s.nextByte();
        switch(day){
            case 1-> System.out.println("\nMonday");
            case 2-> System.out.println("\nTuesday");
            case 3-> System.out.println("\nWednesday");
            case 4-> System.out.println("\nThursday");
            case 5-> System.out.println("\nFriday");
            case 6-> System.out.println("\nSaturday");
            case 7-> System.out.println("\nSunday");
            default-> System.out.println("\nEnter the day correctly !!");
        }
        s.close();
    }
}
