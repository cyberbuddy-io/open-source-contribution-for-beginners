public class TryCatch {
    public static void main(String[] args) {
        int a=6000;
//        int b=9;
        int b=0;
        try {
            int c = a / b;
            System.out.println("The result is "+c);
        }catch(Exception e){
            System.out.println("failed to run");
//            System.out.println(e);
        }
    }
}
