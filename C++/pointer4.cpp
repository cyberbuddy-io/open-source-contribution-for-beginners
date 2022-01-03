#include<iostream>
using namespace std;

int main(){
    //int x = 10;
    //int *p;
    //p = &x;
    //cout << sizeof(short)<<endl;
    //cout << "address of p " << unsigned(p)<<endl;
    //p = p + 4;
    //cout << "address of p " << unsigned(p)<<endl;
    //p =p-2;
    //cout << "address of p " << unsigned(p);
    int x = 10;
    int *p;
    p = &x;
    cout << sizeof(short)<<endl;
    cout << "value of p " << unsigned(*p)<<endl;
   * p = *p + 4;
    cout << "value of p " << unsigned(*p)<<endl;
    *p =*p-2;
    cout << "value of p " << unsigned(*p);
}