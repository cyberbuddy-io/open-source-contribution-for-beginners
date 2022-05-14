class Cons{
    int id;
    String name;
    public Cons(){
        this.id=13;
        this.name="Sukhmeet Singh";
    }
    public Cons(String n,int i){
        this.id=13;
        this.name="Sukhmeet Singh";
    }
    public void display(){
        System.out.println("Your id is "+id+" and name is "+name);
    }
}
public class Constructors {
    public static void main(String[] args) {
        Cons c=new Cons("sukhmeet singh",13);// compiler knows which constructor to run according to the parameters
        c.display();
    }
}
