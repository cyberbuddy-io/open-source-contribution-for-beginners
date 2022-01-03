#include <iostream>
using namespace std;

int main(){
    int x,i,c=1;
    cout<<"enter a number to check factorial : "; cin>>x;
    for (i=1;i<=x;i++)
        c=c*i;
        cout<<"the factorial of your number is : "<<c;
        return 0;
}
