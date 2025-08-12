#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class armstrong	
{
  private:
    int num,d1,d2,d3,d4,rev,sum=0;
  public:
    void show()
    {
	cout<<"enter a number:";
	cin>>num;
	d1=num%10;
	num=num/10;
	d2=num%10;
	num=num/10;
	d3=num%10;
	num=num/10;
	d4=num%10;
	
	sum=d1*d1*d1+d2*d2*d2+d3*d3*d3;
	cout<<"the armstrong number is:"<<sum;
	}
};
 int main()
 {
  armstrong a1;
  a1.show();
  return 0;	
 } 
	 
	    	 
