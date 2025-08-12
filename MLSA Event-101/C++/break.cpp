#include <iostream>

using namespace std;
//	switch statement
 // to print 5 different hi messsages using switch <by a robot having 5 different buttons on it>
  class robo
  {
  	private:
  		 char button;
  	public:
	   void show()
	   {
	   	cout<<"press the button:";
	   	cin>>button;
	   	switch(button)
	   	{
	   	 case 'a':
	   	 	cout<<"hello!"<<endl;
	   	 	    break;
	   	 case 'b':
			cout<<"hola!"<<endl;
			    break;
		 case 'c':
		    cout<<"namaste"<<endl;
		        break;
		 case 'd':
		      cout<<"sat shri akal"<<endl;
		        break;
		 case 'e':
		        cout<<"caio!"<<endl;
				break;				
		default :
		    cout<<"still learning!";
			   break;		
		}
	}
  };
  int main()
  {
  	robo r1;
  	r1.show();
  	return 0;
  }

