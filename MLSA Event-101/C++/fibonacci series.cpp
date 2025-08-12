#include<iostream>
using namespace std;
int main()
{
    int f,s,t,i,n;
    cout<<"enter n";
    cin>>n;
    cout<<"enter number";
    cin>>f;
    cout<<"enter second digit";
    cin>>s;
    for(i=1;i<=n-2;i++)
    {
        t=f+s;
        cout<<t;
        f=s;
        s=t;
    }
}
