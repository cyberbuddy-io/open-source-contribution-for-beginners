#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter a number : ";
    cin >> a;
    cout << "The value of a is : " << a<<endl;
    cout << " The address at which is stored is : " << &a<<endl;
    cout << " The unsigned address at which is stored is : " << unsigned(&a)<<endl;
    return 0;
}