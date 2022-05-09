interface DemoAno{
            void blowHorn(int a);
//            void blowHornn();
}
//class fun implements DemoAno{
//    @Override
//    public void blowHorn() {
//        System.out.println("This is a method !!");
//    }
//}
//    class Demo implements DemoAno{
//            public void blowHorn(){
//                System.out.println("Peee....Peeee..");
//            }
//            public void blowHornn(){
//                System.out.println("Pooo..Pooo...");
//            }
//        void display(){
//            System.out.println("HEllOW");
//        }
//    }
public class Anonymouss {
    public static void main(String[] args) {
////    DemoAno d=new Demo();
////    d.blowHorn();
//        DemoAno d=new DemoAno() {
//            @Override
//            public void blowHorn() {
//                System.out.println("Peee....Peeee..");
//            }
//
////            @Override
////            public void blowHornn() {
////                System.out.println("Pooo....Poooo..");
////            }
//        };
//        d.blowHorn();
////        d.blowHornn();
//        DemoAno dd=new fun();
//        dd.blowHorn();


        //Lambda Function
//    DemoAno d=()->{
//        System.out.println("I am lambda Expression ");
//    };

    // can also be written as
//        DemoAno d=()-> System.out.println("Hieee");
        DemoAno d=(a)-> System.out.println("I am lambda Expression " +a);

    d.blowHorn(5);

    }
}
