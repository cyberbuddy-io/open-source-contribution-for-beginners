// class Base{
//     public int x;
//     public Base(){
//         System.out.println("base constructor");
//     }
//     public Base(int i){
//         System.out.println("yes "+i);
//     }
//     public int getX(){
//         return x;
//     }
//     public void setX(int x){
//         this.x=x;
//     }
// }
// class Derived1 extends Base{
//     public int y;
//     public Derived1(){
//         super(13);//super keyword invokes the constructor of the  class from which it is derived which is also base class
//         System.out.println("derived constructor");
//     }
//     public int getY(){
//         return y;
//     }
//     public void setY(int y){
//         this.y=y;
//     }
// }
// public class Constructor {
//     public static void main(String[] args) {
//         // Base b1=new Base();
//         Derived1 dd=new Derived1();// constructor runs in the order top to bottom

//     }
// }
