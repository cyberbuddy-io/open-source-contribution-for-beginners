class MyyyyThread extends Thread{
    public void run(){

        int i=34;
        while(i<300){
            System.out.println("Thank you 1");
            i++;
        }
    }
}
class MyyyyThread2 extends Thread{
    public void run(){
        int j=34;
        while(j<400){
        System.out.println("Thank you 2");
        j++;
            try {
                Thread.sleep(100);
            } catch (Exception e) {
                System.out.println(e);
            }
        }
    }
}
public class JavaThreadMethods {
    public static void main(String[] args) {
    MyyyyThread m=new MyyyyThread();
    MyyyyThread2 m1=new MyyyyThread2();
    m.start();
    try{
    m.join();// it makes the m1 wait until m is finished if it is finished then i will make m1 run
    }
    catch(Exception e){
        System.out.println(e);
    }
    m1.start();
    }
}
