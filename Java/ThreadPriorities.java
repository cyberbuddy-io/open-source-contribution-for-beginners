class MyyyThread extends Thread{
    public MyyyThread(String name){
        super(name);
    }
    public void run(){

//        int i=34;
        while(true){
            System.out.println("Thankyou "+this.getName());
        }
    }
}
public class ThreadPriorities {
    public static void main(String[] args) {
        //priority thread
        MyyyThread t=new MyyyThread("one");
        MyyyThread t1=new MyyyThread("two");
        MyyyThread t2=new MyyyThread("three");
        MyyyThread t3=new MyyyThread("four");
        MyyyThread t4=new MyyyThread("five(Most important)");
        t4.setPriority(Thread.MAX_PRIORITY);
        t3.setPriority(Thread.MIN_PRIORITY);
        t2.setPriority(Thread.MIN_PRIORITY);
        t1.setPriority(Thread.MIN_PRIORITY);
        t.setPriority(Thread.MIN_PRIORITY);
        t.start();
        t1.start();
        t2.start();
        t3.start();
        t4.start();
    }
}
