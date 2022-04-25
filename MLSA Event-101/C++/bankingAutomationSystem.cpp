#include <iostream>
#include<conio.h>
#include<string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 //BANKING AUTOMATION SYSTEM 
 class bank
 {
  private:
  int accno;
  char name[39];
  int bal;
  public:
  void set()
  {
  	cout<<"enter the accno,name,bal:";
  	cin>>accno>>name>>bal;
  }
  void show()
  {
  	cout<<"\n the accno is:"<<accno;
  	cout<<"\n the name is:"<<name;
  	cout<<"\n the balance is:"<<bal;
  }
  void deposit()
  {
    int amt;
    cout<<"enter the amount u want to deposit:";
    cin>>amt;
    bal=bal+amt;
    cout<<"the net balance is:"<<bal;
  }
  void withdraw()
  {
  	int amt;
  	cout<<"enter the amount u want to withdraw:";
  	cin>>amt;
  	if(amt>bal)
  	{
  		cout<<"\n Insuffiecent balance!";
    }
    else
    {
    	bal=bal-amt;
    	cout<<"\n the actual balance is:"<<bal;
    }
  }
};
  int main()
  {
   bank b1;
   while(1)
   {
   	cout<<"\n Banking Automation System";
   	cout<<"\n 1.SET";
   	cout<<"\n 2.SHOW";
   	cout<<"\n 3.DEPOSIT";
    cout<<"\n 4.WITHDRAW";
    cout<<"\n 5. EXIT";
    cout<<"\n Enter choice from 1-5";
    int choice;
    cin>>choice; 
    switch(choice)
    {
     case 1: b1.set();
            break;
	 case 2: b1.show();
	        break;
	 case 3: b1.deposit();
	        break;
	 case 4: b1.withdraw();
	        break;
	 case 5: exit(0);
	 default: cout<<"\n Invalid Choice!";
	        break;   
	}
   }
   return 0;
 }
  	

