class MyyThread extends Thread{
    public MyyThread(String name){
        super(name);
    }
    public void run(){
//        int i=34;
//        while(true){
//            System.out.println("I am a thread");
//        }
    }
}
public class ConstructorFromThread {
    public static void main(String[] args) {
    MyyThread t=new MyyThread("Sukhmeet singh");
//    t.start();
        System.out.println("The id of the thread is "+t.getId());
        System.out.println("The name of the thread is "+t.getName());
    }
}
