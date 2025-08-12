public class StarPatternUsingFunction {
    static void pattern(){
        byte a=5;
        for(int i=0;i<a;i++){
            for(int j=0;j<=i;j++){
                System.out.print(" * ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        pattern();
    }
}
