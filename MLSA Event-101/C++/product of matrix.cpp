#include<iostream>
using namespace std;
int main()
{
    int a[10][10],b[10][10],mult[10][10],r1,c1,r2,c2,i,j,k;
    cout<<"enter rows and columns for matrix 1: ";
    cin>>r1>>c1;
    cout<<"enter rows and columns for matrix 2: ";
    cin>>r2>>c2;
    while(c1!=r2)
    {
        cout<<"error";
    }
    cout<<endl<<"enter elements of matrix 1:"<<endl;
    for(i=0;i<r1;++i)
        for(j=0;j<c1;++j)
    {
        cout<<"enter elements a"<<i + 1<<j + 1<<" : ";
        cin>>a[i][j];
    }
    cout<<endl<<"enter elements of matrix 2:"<<endl;
    for(i=0;i<r2;++i)
        for(j=0;j<c2;++j)
        {
            cout<<"enter elements b"<<i+1<<j+1<<" : ";
            cin>> b[i][j];
        }
        //initializing elements of matrix mult to 0.
         for(i=0;i<r1;++i)
        for(j=0;j<c2;++j)
        {
            mult[i][j]=0;
        }
        //multiplying matrix a and b and storing in arr mult.
        for(i=0;i<r1;++i)
        for(j=0;j<c2;++j)
            for (k=0;k<c1;++k)
        {
            mult[i][j]+= a[i][k]*b[k][j];
        }
        //displaying multiplication
        cout<<endl<<"output matrix"<<endl;
        for(i=0;i<r1;++i)
        for(j=0;j<c2;++j)
        {
            cout<<" "<<mult[i][j];
            if(j==c2-1)
                cout<<endl;
        }
        return 0;
}
