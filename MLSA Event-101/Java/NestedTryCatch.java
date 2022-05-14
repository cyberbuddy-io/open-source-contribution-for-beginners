import java.util.Scanner;
//if nested try catch handles the exception then outer try catch won't run
public class NestedTryCatch {
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
            System.out.println("Welcome to tutorial");
            try{
                System.out.println("Level 2");
            }catch(ArrayIndexOutOfBoundsException e){
                System.out.println("Index out of bound Exception in level 2 ");
            }
        }
        catch (Exception e){
            System.out.println("Exception in level 1");
        }
    }
}
