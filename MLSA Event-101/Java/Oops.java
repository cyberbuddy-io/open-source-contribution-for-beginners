class Employee{
    
    //attrubutes are the data variables in java class
    
    int id;
    String name;

    public void printDetails(){
        System.out.println("my id is "+id);
        System.out.println("my name is "+name);
    }
    public int getSalary(){
        return 13000;
    }
}
public class Oops {
    public static void main(String[] args) {
        System.out.println("welcome to custom class");
        
        //making object of employee class

        Employee harry=new Employee();
        Employee sam=new Employee();
        
        //setting attributes


        harry.name="sukhmeet";
        harry.id=13;

        sam.name="simmu";
        sam.id=111;

        // System.out.println(harry.name);
        // System.out.println(harry.id);

        harry.printDetails();
        sam.printDetails();

        //calling function in varibale 

        int salary=harry.getSalary();
        int salary2=sam.getSalary();
        System.out.println(salary);
        System.out.println(salary2);
    }
}

