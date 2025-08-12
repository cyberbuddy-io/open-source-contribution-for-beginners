// fucntional interface is an interface with only one abstract method
// @FunctionalInterface// ensures if an interface is functional or not
interface func{
    void thisMethod();
    void thisMethod2();
}
class Base{
    protected void music(){
        System.out.println("I am playing music");
    }
}
class Derived extends Base{
    @Override// catches our error if we are overriding a method
    public void music(){
        System.out.println("Music is being played by me");
    }
    @Deprecated
    public int sum(int a,int b){
        return a+b;
    }
}
public class Annotationss {
    @SuppressWarnings("Deprecation") //suppress the warnings in the program
    public static void main(String[] args) {
        Derived d=new Derived();
        d.music();
        System.out.println(d.sum(400, 23));
        
    }
}
