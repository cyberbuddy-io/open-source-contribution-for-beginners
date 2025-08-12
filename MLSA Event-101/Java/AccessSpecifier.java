class Employeee{
    private int id;
    private String name;
    public void setId(int i){
       this.id=i;
    }
    public int getId(){
        return id;
    }
    public void setName(String n){
        this.name=n;
    }
    public String getName(){
        return name;
    }
}
public class AccessSpecifier {
    public static void main(String[] args) {
        Employeee e=new Employeee();
        // e.id=56;
        // e.name="sukhmeet";
        // // System.out.println(e.id);// will throw error due to private access modifier
        e.setName("sukhmeet");
        System.out.println(e.getName());
        e.setId(13);
        System.out.println(e.getId());
    }
}
