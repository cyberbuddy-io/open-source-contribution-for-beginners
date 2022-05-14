abstract class Base1{
    public Base1(){
        System.out.println("Base 1 constructor here !!");
    }
    public void hello(){
        System.out.println("Hello ");
    }
    abstract public void greet();
}
class Base2 extends Base1{
    @Override
    public void greet(){
        System.out.println("ghusse");
    }
}
class Base3 extends Base2{
    public void th(){
        System.out.println("Fuddu");
    }
}
// abstract class is class having abstract  and we cannot make objects of abstract class
//we must implement all the abstract function or it will show error
public class AbstractClass {
    public static void main(String[] args) {
          Base3 b3=new Base3();
          b3.hello();
          b3.greet();
          b3.th();
    }
}
