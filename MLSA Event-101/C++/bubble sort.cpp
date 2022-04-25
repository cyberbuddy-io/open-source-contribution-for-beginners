#include<iostream>
using namespace std;
int main()
{
    int a[5]={50,40,30,20,10};
    int i,j,c;
    for (i=0;i<=3;i++)
    {
        for(j=0;j<=4;j++)
        {
            if(a[j]>a[j+1])
            {
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }
        }
    }
    for(i=0;i<=4;i++)
    {
        cout<<a[i]<<",";
    }
}
