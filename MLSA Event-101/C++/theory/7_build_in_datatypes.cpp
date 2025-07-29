//********** 7 ************//

#include <iostream>
using namespace std;

int c = 50;  //Global Variable

int main()
{
    // int a,b,c;
    // cout<<"Enter value of a\n";
    // cin>>a;
    // cout<<"Enter value of b\n";
    // cin>>b;
    // c = a + b;
    // cout<<"Sum = "<<c<<endl;

    // cout<<"Golbal c = "<<::c;   // :: = Scope resolution operator to print Global value
    
    // *************** Float, double & long double LITERALS **************** //
    
    float d = 45.7f;    // f - Float
    long double e = 30.53l;    // l - long double
    
    // cout<<"Value of d = "<<d<<endl;
    // cout<<"Value of e = "<<e<<endl;
    // cout<<"Value of d = "<<d<<endl<<"Value of e = "<<e<<endl; 

    cout<<"Size of 45.7 is "<<sizeof(45.7)<<endl;    // By default - Double
    cout<<"Size of 45.7f is "<<sizeof(45.7f)<<endl;
    cout<<"Size of 45.7F is "<<sizeof(45.7F)<<endl;
    cout<<"Size of 45.7l is "<<sizeof(45.7l)<<endl;
    cout<<"Size of 45.7L is "<<sizeof(45.7L)<<endl;

    return 0;
}
