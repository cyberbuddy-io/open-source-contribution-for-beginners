abstract class Telephone{
    abstract void lift();
    abstract void ring();
    abstract void disconnect();
}
class Smartphone extends Telephone{
    public void lift(){
        System.out.println("Lifting telephone..");
    }
    public void ring(){
        System.out.println("Ringing telephone..");
    }
    public void disconnect(){
        System.out.println("Disconnecting telephone..");
    }
}
public class TelephoneClass {
    public static void main(String[] args) {
    Smartphone s=new Smartphone();
    s.ring();
    s.lift();
    s.disconnect();
    }
}
