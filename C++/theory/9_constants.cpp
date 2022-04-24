//********** 9 ************//

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    // int a = 45;
    // cout<<"The value of a was "<<a<<endl;
    // a = 30;
    // cout<<"The value of a is "<<a<<endl;

//********* Constants in C++ ***********//
    const float pie = 3.14;
    cout<<"Pie = "<<pie<<endl;
    // pie = 2.14;  // Error as pie is constant
    cout<<"Pie = "<<pie<<endl;

//*********  Manipulators(<<endl) *************//
    int x=3, y=5;
    cout<<"Value of x is "<<setw(4)<<x<<endl;  //setw(4) = Tab with 4 spaces
    cout<<"Value of y is "<<y<<endl;    

//********* Operator Precedence **************//
    int a = 3, b=4;
    int c = ((((a*5)+b)-45)+87);
    cout<<c<<endl;

    return 0;
}
