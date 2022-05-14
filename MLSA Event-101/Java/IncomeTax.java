import java.util.*;
class IncomeTax {
    public static void main(String[] args) {
    Scanner s=new Scanner(System.in);
    float income,tax=0;
    System.out.print("Enter your yearly income : ");
    income=s.nextFloat();
    if(income<2.5f){
        tax+=0;
    }
    else if(income<5f && income>2.5){
        tax+=0.05*(income-2.5f);
    }        
    else if(income<10f && income>5){
        tax+=0.2*(income-5f);
        tax+=0.05*(5f-2.5f);
    }
    else if(income>10f){
        tax+=0.3*(income-10f);
        tax+=0.05*(5f-2.5f);
        tax+=0.2*(10f-5f);
    }
    System.out.println("Total tax paid is : "+tax);
    s.close();
    }
}
