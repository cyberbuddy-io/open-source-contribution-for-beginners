#include <iostream>
using namespace std;

int main(){
    int i,n;
    cout<<"enter a number to check if it is a  prime number or not : ";
    cin>>n;
    for (i=2;i<n;i++)
    {
        if (n==2)
        {
            cout<<"Prime"<<endl;
            break;
        }
        else if (n%i!=0)
        {
            cout<<"Prime"<<endl;
            break;
        }
        else
        {
            cout<<"Not Prime"<<endl;
            break;
        }
    }
    return 0;
}
