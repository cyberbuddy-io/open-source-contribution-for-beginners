// POINTERS


# include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *aptr=&a; 

    cout<<"Value of variable a =  "<<a<<endl;                 
    cout<<"The address of a =  "<<&a<<endl;                     
    cout<<"variable stores the address of a =  "<<aptr<<endl;              

}











# include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *aptr=&a;

    cout<<"Value of variable a =  "<<a<<endl;                 
    cout<<"The address of a =  "<<&a<<endl;                     
    cout<<"variable stores the address of a =  "<<aptr<<endl;
    cout<<"access the value of the variable whose address is stored in it = "<<*aptr;

}





















# include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *aptr=&a;

    cout<<*aptr<<endl;

    *aptr=20;              

    cout<<*aptr;


}

















# include<iostream>
using namespace std;
int main()
{
    int i=5,j=2;
    int *ptr=&i;

    cout<<&i<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    *ptr=10;
    cout<<"Value of i = "<<*ptr<<endl;

    j=*ptr;
    cout<<"Value of j = "<<j;


}



















// Pointers Arithmetic.....++ -- + -



# include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *ptr=&a;

    cout<<ptr<<endl;

    ptr++;                  
    cout<<ptr<<endl;

}









# include<iostream>
using namespace std;
int main()
{
    int num=10;
    int a=num;
    a++;
    cout<<a<<endl;
    cout<<num;
}










# include<iostream>
using namespace std;
int main()
{
    int num=5;
    int *p=&num;
    int a=*p;
    a++;
    cout<<a<<endl;
    cout<<num;

}







# include<iostream>
using namespace std;
int main()
{
    int num=5;
    int *p=&num;
    (*p)++;
    cout<<num<<endl;
    cout<<*p;
}









# include<iostream>
using namespace std;
int main()
{
    int i=3;
    int *t=&i;

    cout<<*t<<endl;
    (*t)++;
    cout<<*t++<<endl;

    cout<<"\n";

    cout<<t<<endl;
    t++;
    cout<<t++;

}
























# include<iostream>
using namespace std;
int main()
{
    char ch[6]="abcde";
    char *ptr=&ch[0];
    cout<<ch;                

}














// Pointers and arrays



# include<iostream>
using namespace std;
int main()
{
    int arr[3]={6,5,9};
    int *ptr=arr;
    cout<<arr<<endl;           
    cout<<ptr<<endl;          
    cout<<*arr<<endl;         
    cout<<*ptr<<endl;        

}












# include<iostream>
using namespace std;
int main()
{
    int arr[5]={8,5,2,6,9};
    int *ptr=arr;
    for(int i=0;i<5;i++)
    {
       cout<<"Array element at "<<i<<" = "<<*ptr<<endl;
        ptr++;

    }

    
}











# include<iostream>
using namespace std;
int main()
{
    int arr[30],n,i;
    int *ptr=arr;
    cout<<"Enter n: ";
    cin>>n;

    cout<<"Enter array elements: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"displaying array elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Array element at "<<i<<" = "<<*(arr+i)<<endl;
    }

}














# include<iostream>
using namespace std;
int main()
{
    int arr[5]={9,4,1,3,7};
    int *ptr=arr;
    cout<<"Address using Array:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"At arr["<<i<<"]="<<&arr[i]<<endl;
    }

    cout<<"\nAddress using pointers: "<< endl;
    for(int i=0;i<5;i++)
    {
        cout<<"At arr["<<i<<"]="<<ptr+i<<endl;
    }


}




















// Pointers in 2-D Array


# include<iostream>
using namespace std;
int main()
{
    int a[2][3]={10,20,30,40,50,60};
    cout<<"Elements are:\n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<*(*(a+i)+j)<<" ";
        }
        cout<<"\n";
    }

}












// Pointers and functions

# include<iostream>
using namespace std;
void print(int *ptr)
{
    cout<<*ptr<<endl;
}

int main()
{
    int a=5;
    int *ptr=&a;
    print(ptr);
}




