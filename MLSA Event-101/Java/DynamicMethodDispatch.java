//only during runtime it is decided which method is going to run
class One{
    public void name(){
        System.out.println("My name is java");
    }
    public void greet1(){
        System.out.println("Good morning");
    }
}
class Two extends One{
    public void greet(){
        System.out.println("Good afternoon");
    }
    public void name(){
        System.out.println("My name is java in class 2");
    }
}
public class DynamicMethodDispatch {
    public static void main(String[] args) {
        // One o=new One();
        // Two t=new Two();
        // o.name();
        One o=new Two();
        //only base class methods can run
        // reference is of super class and object of sub class  inverse in not true 
        // we cannot  access derived class functions through this
        // it will run function of derived class only in fucntion over riding 
        // Two t=new One();//not allowed
        o.name();
        o.greet1();
    }
}
