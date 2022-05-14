
interface Bicycle{
    int a=45;
    void applybreak(int decrement);
    void speedup(int increment);
}
interface Horns{
    void hornk();
    void hornm();
}
class Cycle implements Bicycle,Horns{
    void blowhorn(){
        System.out.println("Pee....Peeee");
    }
    public void applybreak(int decrement){
        System.out.println("Applying break");
    }
    public void speedup(int increment){
        System.out.println("Speeding up");
    }
    public void hornk(){
        System.out.println("Kbhi khushi kabhi gum");
    }
    public void hornm(){
        System.out.println("Mai hun na");
    }
}
public class Interface {
    public static void main(String[] args) {
        System.out.println("Welcome to Interface");
        Cycle c=new Cycle();
        c.applybreak(1);
        System.out.println(c.a);
        c.speedup(2);
        c.blowhorn();
        c.hornk();
        c.hornm();
        // you can create properties in interfaces
        // you cannot modify properties of interfaces as they are final
//        c.a=454;//not allowed
    }
}
