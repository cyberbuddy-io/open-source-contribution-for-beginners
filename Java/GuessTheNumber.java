import java.util.*;
class GN{
    int counter=13;
    public void design(){
        System.out.println("\t\t\t\t\t\t\t<<-----------------------------  GUESS NUMBER  ---------------------------->>\n");
        System.out.println("Number of guesses left: "+counter);
    }
    public void input(){
        int n;
        Scanner sc=new Scanner(System.in);
        while(true){
            design();
            System.out.print("Guess the number: ");
            n=sc.nextInt();
            if(n==13){
                System.out.println("YOU WIN !!");
                break;
            }
            else if(n>13){
                System.out.println("YOU ARE GOING FAR AWAY !!");
                counter--;
            }
            else if(n<13){
                System.out.println("YOU ARE COMING CLOSER !!");
                counter--;
            }
            if(counter==0){
                System.out.println("\n\n\t\t\t\t!! SORRY YOU ARE OUT OF GUESSES !!");
                break;
            }

        }
        sc.close();
    }
}
public class GuessTheNumber{
    public static void main(String[] args) {
        GN obj=new GN();
       obj.input();
    }
}