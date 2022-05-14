interface TvRemote{
     void channel();
}
interface SmartTvRemote extends TvRemote{
    void switcch();
}
class TVV implements SmartTvRemote{
    public void channel(){
        System.out.println("Switching channels..");
    }
    public void switcch(){
        System.out.println("Turning off..");
    }
}
public class TvRemoteClass {
    public static void main(String[] args) {
    TVV t=new TVV();
    t.channel();
    t.switcch();
    }
}
