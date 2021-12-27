//********** 5 ************//

#include <iostream>
#include "header.h"     // HEADER FILE present in Directory
using namespace std;

int main()
{
    int a=100,b=30;

    //Arithmatic Operator
    cout<<"Value of a+b is "<<a+b <<endl;
    cout<<"Value of a-b is "<<a-b <<endl;
    cout<<"Value of a*b is "<<a*b <<endl;
    cout<<"Value of a/b is "<<a/b <<endl;
    cout<<"Value of a%b is "<<a%b <<endl;
    cout<<"Value of a++ is "<<a++ <<endl;
    cout<<"Value of a-- is "<<a-- <<endl;
    cout<<"Value of ++a is "<<++a <<endl;
    cout<<endl;

    //Assignment Operator
    // int a=2,b=8;
    // char d = 'y';

    //Comparsion Operator
    cout<<"The value of a == b is "<<(a==b) <<endl;
    cout<<"The value of a > b is "<<(a>b) <<endl;
    cout<<"The value of a < b is "<<(a<b) <<endl;
    cout<<"The value of a >= b is "<<(a>=b) <<endl;
    cout<<"The value of a <= b is "<<(a<=b) <<endl;
    cout<<endl;

    //Logical Operators
    cout<<"And Operator "<<( (a==b) && (a<b) )<<endl;
    cout<<"Or Operator "<<( (a==b) || (a<b) )<<endl;
    cout<<"Not Operator "<<!(a==b)<<endl;

    return 0;
}
