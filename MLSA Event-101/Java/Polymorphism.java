interface  Camera2{
        void takeSnap2();
        void recordVideo2();
// we cannot implement private method from interface but we can use it as
private void greet2(){
        System.out.println("Morning ...");
        }
default void record4k2(){
        greet2();
        System.out.println("Recording in 4k...");//if we want to add method in interface without changing the implementing class
        }
        }
interface Wifi2{
    String[] getNetwork2();
    void connectToNetwork2(String network);
}
class CellPhone2{
    void callNumber(String phonenumber){
        System.out.println("Calling ... "+phonenumber);
    }
    void pickCall(){
        System.out.println("Connecting ...");
    }
}
class SmartPhone2 extends CellPhone2 implements Camera2,Wifi2
{
    public void takeSnap2(){
        System.out.println("Taking snap ...");
    }
    public void recordVideo2(){
        System.out.println("Recording ...");
    }
    public String[] getNetwork2(){
        System.out.println("Getting list of networks ...");
        return new String[]{"Harry","Sam","Sukhmeet"};
    }
    public void connectToNetwork2(String network){
        System.out.println("Connecting to "+ network);
    }
}
public class Polymorphism {
    public static void main(String[] args) {
    //object of smartphone with reference to camera interface
    Camera2 cam1=new SmartPhone2();
//  cam1.getNetwork();//not allowed
    cam1.record4k2();
    SmartPhone2 s=new SmartPhone2();
    }
}
