public class Recursion {
    // static int factorial(int a){
    //     if(a==0||a==1){
    //         return 1;
    //     }
    //     else{
    //         return a*factorial(a-1);
    //     }
    // }
    static int factorial(int a){
        if(a==0||a==1){
            return 1;
        }
        else{
            // return a*factorial(a-1);
            int product=1;
            for(int i=1;i<=a;i++){
                product*=i;
            }
            return product;
        }
    }
    public static void main(String[] args) {
        int a=5;
        System.out.println("The value of factorial a is "+factorial(a));
    }
}
