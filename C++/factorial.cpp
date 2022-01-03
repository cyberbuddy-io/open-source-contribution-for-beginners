#include <iostream>
using namespace std;

int main(){
    int i,a,c=1;
    cout<<"enter number to check the factorial!! ";
    cin>>i;
    for (int a=1;a<=i;a++)
        c=a*c;
        cout<<"your answer is : "<<c;
        return 0;
}
