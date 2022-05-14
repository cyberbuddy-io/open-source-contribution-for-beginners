abstract class Pen{
    abstract protected void write();
    abstract protected void refill();
}
class Pen2 extends Pen{
    public void write(){
        System.out.println("Writing...");
    }
    public void refill(){
        System.out.println("Refilling...");
    }
}
public class PenAbstract {
    public static void main(String[] args) {
    Pen2 p=new Pen2();
    p.write();
    p.refill();
    }
}
