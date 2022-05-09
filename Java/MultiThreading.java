class MyThread extends Thread{
    public void run(){
        int i=0;
        while(i<300){
        System.out.println("1 is running ");
        i++;
        }
    }
}
class MyThread2 extends Thread{
    public void run(){
        int i=0;
    while(i<300){
        System.out.println("2 is running");
        i++;
    }
    }
}
public class MultiThreading {
    public static void main(String[] args) {
    MyThread t=new MyThread();
    MyThread2 t2=new MyThread2();
    t.start();
    t2.start();
    }
}
