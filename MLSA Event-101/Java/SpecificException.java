import java.util.Scanner;

public class SpecificException {
    public static void main(String[] args) {
    int []marks=new int[3];
    marks[0]=7;
    marks[1]=17;
    marks[2]=27;
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the index of array: ");
        int ind=sc.nextInt();
        System.out.print("Enter the number you want to divide with: ");
        int number=sc.nextInt();
        try{
            System.out.println("The value at array index entered is "+marks[ind]);
            System.out.println("The value at array divided by number is is "+marks[ind]/number);
        }
        catch(ArithmeticException e){
            System.out.println("Arithmetic exception occurred !!");

        } catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Index out of bound exception occurred !!");

        } catch(Exception e){
            System.out.println("Some other exception occurred !!");

        }
    }
}
