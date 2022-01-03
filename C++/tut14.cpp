//pointers holds the address of other data
#include <iostream>
using namespace std;

int main(){
    int a =5;
    cout<<"the value of a is : "<<a<<endl;
    int* b =&a;
    //b stores the address of a
    cout<<"the address of a is : "<<&a<<endl;
    cout<<"the address of a stored in b is : "<<b<<endl;
    cout<<"the value stored in b is : "<<*b<<endl;
    //pointer to pointer stores the address of previous pointer
    int** c=&b;
    cout<<"the adress of b stored in c is : "<<c<<endl;
    cout<<"the value stored in address of c in address of b in address a is : "<<**c<<endl;

    return 0;
}
