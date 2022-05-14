// class EkClass{
//     int a;
//     public int returnone(int v){
//         return 1;
//     }
//     public int getA(){
//         return a;
//     }
//     public  EkClass(int a){
//         this.a=a;// this i used for reference inside class
//         System.out.println("mai constructor huuu");
//     }
// }
// class DoClass extends EkClass{
//     public DoClass(int c){
//         super(c);//super keyword is used to invoke the constructor functions of the parent class
//         System.out.println("Mai ek constructor hu "+a);
//     }
// }
// public class ThisAndSuper{
//     public static void main(String[] args) {
//         // EkClass e=new EkClass(13);
//         DoClass d=new DoClass(13);
//         // System.out.println(e.getA());

//     }
// }