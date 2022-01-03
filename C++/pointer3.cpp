#include<iostream>
using namespace std;

int main(){
    int a;
    float b;
    char c;
    cout << "enter an integer: " << endl;
    cin >> a;
    cout << "enter a floating number : " << endl;
    cin >> b;
    cout << "enter a character : " << endl;
    cin >> c;
    cout << "entered integer-> " << a<<endl;
    cout << "entered float-> " << b<<endl;
    cout << "entered character-> " << c<<endl;
    cout << "the address of entered integer is -> " << &a << endl;
    cout << "the address of entered float is -> " << &b << endl;
    cout << "the address of entered character is -> " << &c << endl;
    cout << "the unsigned address of entered integer is -> " <<unsigned( &a) << endl;
    cout << "the unsigned address of entered float is -> " <<unsigned( &b) << endl;
    cout << "the unsigned address of entered character is -> " <<unsigned( &c) << endl;

    return 0;
}