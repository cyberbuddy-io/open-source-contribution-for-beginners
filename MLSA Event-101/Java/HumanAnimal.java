class Monkey{
    void jump(){
        System.out.println("Jumping..");
    }
    void bite(){
        System.out.println("Biting..");
    }
}
interface BasicAnimal {
    void sleep();
    void eat();
}
class Human extends Monkey implements BasicAnimal{
    public void sleep(){
        System.out.println("Sleeping..");
    }
    public void eat(){
        System.out.println("Eating..");
    }
}
public class HumanAnimal {
    public static void main(String[] args) {
    Human h=new Human();
    h.eat();
    h.bite();
    h.jump();
    h.sleep();
    }
}
