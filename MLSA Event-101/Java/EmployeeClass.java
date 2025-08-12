import java.util.*;
public class EmployeeClass {
    int s;
    String name,newName;
    public  void salary(int salary){
        s=salary;
    }
    public int getSalary(){
        return s;
    }
    public void name(String n){
        name=n;
    }
    public String getName(){
        return name;
    }
    public void setName(String nn){
        newName=nn;
        System.out.println("Your name changed from "+name+" to "+nn);
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        EmployeeClass e=new EmployeeClass();
        int sa;
        String n;
        String na;
        System.out.print("Enter your salary: ");
        sa=sc.nextInt();
        e.salary(sa);
        System.out.println("Your salary is "+e.getSalary());
        System.out.print("Enter your name: ");
        n=sc.next();
        e.name(n);
        System.out.println("Your name is "+e.getName());
        System.out.print("Enter your new name: ");
        na=sc.next();
        e.setName(na);
        sc.close();
    }
    
}
