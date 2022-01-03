#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter two numbers : "<<endl;
    cin>>a>>b;
    cout<<"before swapping-- "<<"a : "<<a<<"  b : "<<b<<endl;
    c=b;
    b=a;
    a=c;
    cout<<"after swapping--- "<<"a : "<<a<<"  b : "<<b<<endl;
    return 0;
}
