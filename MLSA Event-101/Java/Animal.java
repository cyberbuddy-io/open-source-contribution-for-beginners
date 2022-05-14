class AAnimal{
    public String  sound(String s){
        return s;
    }
public int legs(int n){
    return n;
}
}
class Dog extends AAnimal{
}
public class Animal {
    public static void main(String[] args) {
        Dog d=new Dog();
        System.out.println("The sound of dog is "+d.sound("Bow...Boww..."));
        System.out.println("Number of legs of a dog are "+d.legs(4));
    }
}
