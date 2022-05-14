

interface Camera{
    void takeSnap();
    void recordVideo();
    // we cannot implement private method from interface but we can use it as
    private void greet(){
        System.out.println("Morning ...");
    }
    default void record4k(){
        greet();
        System.out.println("Recording in 4k...");//if we want to add method in interface without changing the implementing class
    }
}
interface Wifi{
    String[] getNetwork();
    void connectToNetwork(String network);
}
class CellPhone{
    void callNumber(String phonenumber){
        System.out.println("Calling ... "+phonenumber);
    }
    void pickCall(){
        System.out.println("Connecting ...");
    }
}
class SmartPhone extends CellPhone implements Camera,Wifi
{
    public void takeSnap(){
        System.out.println("Taking snap ...");
    }
    public void recordVideo(){
        System.out.println("Recording ...");
    }
    public String[] getNetwork(){
        System.out.println("Getting list of networks ...");
        return new String[]{"Harry","Sam","Sukhmeet"};
    }
    public void connectToNetwork(String network){
        System.out.println("Connecting to "+ network);
    }
}
public class InterfacesEx {
    public static void main(String[] args) {
        SmartPhone s=new SmartPhone();
        s.record4k();
        s.takeSnap();
        s.recordVideo();
        s.pickCall();
        s.callNumber("7814583191");
        for( String item:s.getNetwork()){
            System.out.println(item);
        }
        s.connectToNetwork("Sam");
//        m.greet()://throws error as it is a private method in interface
    }
}
