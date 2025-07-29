import java.io.Serializable;

class SavingsAccount extends Account implements Serializable {
    double r = 4.5;
    public SavingsAccount(String nm,int Ano,double bal){
        super(nm,Ano,bal,"Savings");
        rate = r;
    }
    @Override
    public void deposit(double amt){
        setBalance(amt);
    }
    @Override
    public void withdraw(double amt){
        if(amt>getBalance()){
            System.out.println("Not Enough Balance");
        }
        else setBalance(-amt);
    }
}
class CurrentAccount extends Account implements Serializable{
    double r=0;
    public CurrentAccount(String nm,int Ano,double bal){
        super(nm,Ano,bal,"Current");
        rate = r;
    }
    @Override
    public void deposit(double amt){
        setBalance(amt);
    }
    @Override
    public void withdraw(double amt){
        if(amt>getBalance()){
            System.out.println("Not Enough Balance");
        }
        else{
            if(getBalance()<5000){
                System.out.println("Penalty of 100");
                setBalance(-amt-100);
            }
            else{
                setBalance(-amt);
            }
        }
    }
}
class LoanAccount extends Account implements Serializable{
    double r=7.5;
    public LoanAccount(String nm,int Ano,double bal){
        super(nm,Ano,bal,"Loan");
        rate = r;
    }
    @Override
    public void deposit(double amt){
        if(amt>-getBalance()){
            System.out.println("You are paying more then debt");
        }
        else{
            setBalance(amt);
        }
    }
    @Override
    public void withdraw(double amt){
        setBalance(-amt);
    }
}
abstract class Account{
    private String name;
    private int AccountNo;
    private double balance;
    protected double rate;
    private String type;
    public Account(String nm,int Ano,double bal,String type){
        this.name=nm;
        this.AccountNo=Ano;
        this.balance=bal;
        this.type=type;
    }
    public abstract void deposit(double amt);
    public abstract void withdraw(double amt);
    public double getBalance(){
        return balance;
    }
    protected void setBalance(double amt){
        balance+=amt;
    }
    public void ins(){
        double inst = balance*(rate/100.0);
        balance+=inst;

    }
    public String getDetailsQuery(){
        return("INSERT INTO bank_account")
    }
    public void display(){
        System.out.println("Account No : "+AccountNo+"\nName : "+name+"\nBalance : "+balance);
    }
}
public class BankAccount{

}
