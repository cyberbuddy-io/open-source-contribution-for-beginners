public class Methods {
    static int add(int x, int y){
    // int add(int x, int y){
        if(x>y){
            System.out.println("X is greater ");
            return x;
        }
        else{
            System.out.println("Y is greater ");
            return y;
        }
    }
    public static void main(String[] args) {
        // Methods obj=new Methods();
        int a=5,b=6;
        int c;
        // c=obj.add(a, b);
        c=add(a,b);
        System.out.println(c);
    }
}
