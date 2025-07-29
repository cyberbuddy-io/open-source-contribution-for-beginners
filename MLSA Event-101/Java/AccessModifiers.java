class C1{
        public int x=5;
        protected int y=45;
        int z=6;
        private int a=70;
        public void meth1(){
            System.out.println(x);
            System.out.println(y);
            System.out.println(a);
            System.out.println(z);
        }
}
class C2 extends C1{
    void display(){
        System.out.println("Welcome...");
    }

}

//-----------------------------------------------------------------
//
//Modifier        class       package     subclass        world
//
//public          y           y           y               y
//private         y           n           n               n
//protected       y           y           y               n
//default         y           y           n               n
//
//-----------------------------------------------------------------

public class AccessModifiers {
    public static void main(String[] args) {
//        C1 c=new C1();
//        c.meth1();
////        System.out.println(c.a);// a has private access not allowed
//        System.out.println(c.y);
//        System.out.println(c.z);
        C2 c=new C2();
        c.display();
        c.meth1();
//        System.out.println(c.a);// a is not accessible as a is private
        System.out.println(c.x);
        System.out.println(c.y);
        System.out.println(c.z);

    }
}
