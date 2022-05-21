class Base{
    int x;
    Base(){
        System.out.println("I am a constructor of base");
    }
    public int getX(){
        return x;
    }
    public void setX(int x){
        System.out.println("I am setting X now");
        this.x=x;
    }
}
class Derived extends Base{
    int y;
    Derived(){
        System.out.println("I am constructor of derived");
    }
    public int getY(){
        return y;
    }
    public void setY(int y){
        System.out.println("I am setting Y now");
        this.y=y;
    }
}
public class Inheritance {
    public static void main(String[] args) {
        Derived d=new Derived();
        // Base d=new Base();  we cannot access methods of derived class from base class object but we can access base class methods using derived class objects
        d.setX(13);
        System.out.println(d.getX());
        d.setY(11);
        System.out.println(d.getY());
    }
}
