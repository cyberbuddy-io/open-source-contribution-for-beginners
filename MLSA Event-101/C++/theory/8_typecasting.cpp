//********** 8 ************//

#include <iostream>
using namespace std;

int main()
{ // ******** Reference Variables(&b) ********* //
    // Rohit --- Monty --- Rohu 
    // float a = 455;
    // float &b = a;  // & ==> address of
    // cout<<a<<endl;
    // cout<<b<<endl;

// ************ Type Casting ************* //
    int a = 45;
    float b = 68.53;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of b is "<<(int)b<<endl;
    // cout<<"The value of b is "<<int(b)<<endl;

    cout<<"The expression is "<<a + b<<endl;  // decimal
    cout<<"The expression is "<<a + int(b)<<endl; // int
    cout<<"The expression is "<<a + (int)b<<endl; // int

    return 0;
}
