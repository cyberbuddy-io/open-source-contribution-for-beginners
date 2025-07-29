import java.util.ArrayList;
import java.util.Scanner;

//-------------------------------------------

// Generics are similar to templates in c++

//---------------------------------------------


class gener<ti,to>{
    int val=344;
    private ti t;
    private to tt;
    public gener(int val,ti t,to tt){
        this.val=val;
        this.t=t;
        this.tt=tt;
    }

    public to getTt() {
        return tt;
    }

    public void setTt(to tt) {
        this.tt = tt;
    }

    public int getval(){
        return val;
    }
    public void setval(int val){
        this.val=val;
    }
    public void setti(ti t){
        this.t=t;
    }
    public ti getti(){
        return t;
    }
}
public class Genericss
{
    public static void main(String[] args) {
//        ArrayList arraylist=new ArrayList();
//        arraylist.add("str1");
//        arraylist.add(2.56f);
//        arraylist.add(new Scanner(System.in));
//        ArrayList<Integer> arraylist=new ArrayList();//cant write int in place of integer
//        arraylist.add(54);
////        arraylist.add("str");
//        int a= /*(int)*/ arraylist.get(0);
//        System.out.println(a);
        gener<String,Float> g=new gener(23,"MyString",13.13f);
        String str= /*(String)*/ g.getti();
        Float y=g.getTt();
        System.out.println(str + y);
    }
}
