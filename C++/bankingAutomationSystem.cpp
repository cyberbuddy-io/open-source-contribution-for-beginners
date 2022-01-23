#include <iostream>
#include<conio.h>
#include<string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
//operator overloading 
/*class Distance
{
 private:
 int meter;
 public:
   void set()
   {
   	cout<<"\n enter the meter:";
   	cin>>meter;
   }
   void show()
   {
   	cout<<"\n the meters are:"<<meter;
   }
   Distance operator++()
   {
   	  meter++;
   }
   Distance operator+(int n)
   {
   	meter=meter+n;
   }
};
int main()
{
 Distance d1;
 d1.set();
 d1.operator++();
 d1.show();
 d1+7;
 d1.show();
}*/
/*class complex
{
	private:
	int real;
	int img;
	public:
		void set()
		{
			cout<<"enter the real and img parts:";
			cin>>real>>img;
		}
		void show()
		{
			cout<<"\n the real part is:"<<real;
			cout<<"\n the imaginary part is:"<<img;
		}
		complex operator+(complex c2)
		{
			complex c3;
			c3.real=real+c2.real;
			c3.img=img+c2.img;
			return c3;
		}
};
int main()
{
	complex c1,c2,c3;
	c1.set();
	c2.set();
	c3=c1+c2;
	c3.show();
	return 0;
}*/
//wap to define class distance and overlaod> operator 
/*class Distance
{
	private:
	int meter;
	public:
		void set()
		{
			cout<<"\n enter the meter:";
			cin>>meter;
		}
		void show()
		{
			cout<<"\n the meters are:"<<meter;
		}
		int operator>(Distance d2)
		{
			if(meter>d2.meter)
			{
				return (1);
			}
			else
			{
				return (0);
			}
		}
 };
 int main()
 {
 	Distance d1,d2;
 	d1.set();
 	d2.set();
 	if(d1>d2)
 	{
 		cout<<"d1 is greater";
 	}
 	else
 	{
 		cout<<"d2 is greater";
	}
	d1.show();
	d2.show();
  }*/
 // wap to define a class date and overload +operator
/* class Date
 {
  private:
  int dd;
  int mm;
  int yy;
  public:
  	void set()
  	{
  	 cout<<"\n enter the date ,month and year:";
  	 cin>>dd>>mm>>yy;
    }
    void show()
    {
     cout<<"\n the date is:"<<dd;
	 cout<<"\n the month is:"<<mm;
	 cout<<"\n the year is:"<<yy;	
	}
	Date operator+(Date d2)
	{
		Date d3;
		d3.dd=dd+d2.dd;
		d3.mm=mm+d2.mm;
		d3.yy=yy+d2.yy;
		if(d3.dd>=30)
		{
			d3.mm+=d3.dd/30;
			d3.dd=d3.dd%30;
		}
		if(d3.mm>=12)
		{
			d3.yy+=d3.mm/12;
		    d3.mm+=d3.mm%12;
		}
		return d3;
	}
  	
   };
   int main()
   {
   	Date d1,d2,d3;
   	d1.set();
   	d2.set();
   	d3=d1+d2;
   	d3.show();
   	return 0;
   }*/  
   //wapto define class time ,overload+operator to add given no in the hh
   /*class time
   {
   private:
   int ss;
   int mm;
   int hh;
   public:
   	void set()
   	{
   	 cout<<"\n enter the time in seconds,min and hours:";
   	 cin>>ss>>mm>>hh;
	}
	void show()
	{
	 cout<<"\n the seconds are:"<<ss;
	 cout<<"\n the min are:"<<mm;
	 cout<<"\n the hours are:"<<hh;	
	}
	time operator+(int n)
	{
	  hh=hh+n;	
	}
};
 int main()
 {
   time t1;
   t1.set();
   t1.show();
   t1+8;   // operator overloading 
   t1.show();
   return 0;
 }*/
 // concatenate two strings using + operator
 /*class concat
 {
   private:
   char s1[39];
   public:
   void set()
   {
   	cout<<"\n enter the  string:";
   	cin>>s1;
   }
   void show()
   {
   	cout<<"\n the string is:"<<s1;
   }
   concat operator+(concat s2)
   { 
      concat s3;
      strcat(s1,s2.s1);
      strcpy(s3.s1,s1);
      return s3;
   }		
 };
 int main()
 {
 	concat s1,s2,s3;
 	s1.set();
 	s2.set();
 	s3=s1+s2;
 	s3.show();
 }*/
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
  	

