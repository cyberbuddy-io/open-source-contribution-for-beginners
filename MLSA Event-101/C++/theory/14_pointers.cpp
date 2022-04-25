//Pointers - Variable which store the address of other Variables

#include<iostream>
using namespace std;
int main(){
//*********** Pointers **************//    
    // int a=3;
    // int* b;
    // b= &a;
                // & - (Address of) operator
    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<b<<endl;

                // * - (value at) Derefference operator
    // cout<<*b<<endl; 

//************ Reference Variable *************//
 /* string food = "Pizza";
    string &meal = food;
    cout<<food<<endl;
    cout<<meal<<endl;
    cout<<&food<<endl;  // &food - Address of food
    cout<<&meal<<endl;  
*/
    int x=4;
    int* b;//value at
    b =&x;//address of
    cout<<x<<endl; //4
    cout<<b<<endl; //00
    cout<<&x<<endl; //00
    cout<<&b<<endl; //00
    cout<<*b<<endl; //4
    *b = 30;
    cout<<x<<endl; //
    cout<<b+1<<endl;


    return 0;
}