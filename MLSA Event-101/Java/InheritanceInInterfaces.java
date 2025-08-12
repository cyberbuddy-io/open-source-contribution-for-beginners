
interface sample{
    void meth1();
    void meth2();
}
interface childSample extends sample{
    void meth3();
    void meth4();
}
class MySampleClass implements childSample{
    public void meth1(){
        System.out.println("Method 1");
    }
    public void meth2(){
        System.out.println("Method 2");
    }
    public void meth3(){
        System.out.println("Method 3");
    }
    public void meth4(){
        System.out.println("Method 4");
    }
}
public class InheritanceInInterfaces {
    public static void main(String[] args) {
    MySampleClass s=new MySampleClass();
    s.meth1();
    s.meth2();
    s.meth3();
    s.meth4();
    }
}
