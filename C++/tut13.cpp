//also this code can be used to find list of odd numbers
#include <iostream>
using namespace std;
int main()
{
    int i,j;
    cout<<"enter number upto which you want to find odd numbers list: ";
    cin>>j;
    for (i = 1; i <= j; i++){
    if (i%2==0){
        continue;}
        cout<<i<<endl;}
    return 0;
    
}