public class ContinueAndBreak {
    public static void main(String[] args) {
        int a;
        for(a=0;a<10;a++){//this loop will run from 0 to 9
            if(a==8){
                System.out.println("Breaking loop");
                break;//break statement will break the loop when a's value becomes equal to 8 irrespective of whether loop is finished or not
            }
            if(a%2==0){
                System.out.println("Skipping even number");
                continue;//here if there is even number continue will skip that number and it will not be printed
            }
            else{
                System.out.println(a);
            }
        }
    }
}
// WE can also use break and continue in do while and while loops