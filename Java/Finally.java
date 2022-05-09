public class Finally {
    public static void main(String[] args) {
        try{
            int a=5;
            int b=10;
            int c=a/b;
            System.out.println(c);
        }catch(Exception e){
            System.out.println("Arithmetic Exception!!");
        }finally{
            System.out.println("This is the end of the program.");
        }
    }
}
