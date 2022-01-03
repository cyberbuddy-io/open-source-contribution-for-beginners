#include<iostream>
using namespace std;

int main(){
    int a = 13;
    int *b =& a;
    cout << "value of b is  : " << b<<endl;
    cout << "value of a stored in b is : " << *b;
    return 0;
}