#include<iostream>
using namespace std;
int main()
{
    int a[10]={5,15,20,35,40,1,8,19,22};
    for (int i=0;i<9;i++)
    {
        int idx=i;
        for(int j=i+1;j<10;j++)
        {
            if (a[j]<a[idx])
            {
                idx=j;
            }
        }
        int temp=a[idx];
        a[idx]=a[i];
        a[i]=temp;
    }
   for (int i=0;i<10;i++)
   {
       cout<<a[i]<<" ";
   }
}
