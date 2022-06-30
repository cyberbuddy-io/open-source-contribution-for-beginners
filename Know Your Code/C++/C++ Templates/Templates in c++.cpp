// C++ Templates

/*

Templates used to prevent from function overloading 
Templates can be represented in two ways:
(i)     Function templates
(ii)    Class templates

*/










// (1)  Function templates


// without template
// only take specific data type





# include<iostream>
using namespace std;
void big(int a, int b)             
{
    cout<<a+b;
}


int main()
{
    int a,b;
    a=5.8883;
    b=4.2;
                            
    big(a,b);
}











// with template
// T is replaced with proper data type 





# include<iostream>
using namespace std;
template <class T>              
void add(T a, T b)

{
    cout<<a+b<<endl;
}

int main()
{
    int q=3,e=5;
    float x=2.4, k=7.2;
    add(q,e);
    add(x,k);

}

















# include<iostream>
using namespace std;
template <class T>                 // T is replaced with proper data type 
T add(T a, T b)

{
    return a+b;
}

int main()
{
    int q=3,e=5;
    float x=2.4, k=7.2;
    cout<<add(q,e)<<endl;
    cout<<add(x,k)<<endl;

}
























// Function Templates with Multiple Parameters




# include<iostream>
using namespace std;
template <class T , class R , class D>                 // T is replaced with proper data type 
R add(T a, R b, D c)

{
    return a+b+c;
}

int main()
{
    cout<<add(2,4.2,2);
}

















// Overloading a Function Template




#include <iostream>  
using namespace std;  
template<class X> 
void fun(X a)  
{  
    cout << "Value of a is : " <<a<<endl;  
} 

template<class X,class Y> 
void fun(X b ,Y c)  
{  
    cout << "Value of b is : " <<b<<endl;  
    cout << "Value of c is : " <<c<<endl;  
}  


int main()  
{  
   fun(10);  
   fun(20,30.5); 

   return 0;  
}  




















# include<iostream>
using namespace std;
template <class T>
void fun(T a , T b)
{
    cout<<a+b<<endl;
}


template <class E, class Y>
void fun(E c, Y v)
{
    cout<<c+v<<endl;
    
}



int main()
{
    fun(2,2);
    fun(1,1.1);
}


























// (2)  class templates




# include<iostream>
using namespace std;
template <class T>
class A
{
    public:
    T num1;
    T num2;

    void add()
    {
        cout<<"Value of num1 = "<<num1<<endl;
        cout<<"Value of num2 = "<<num2<<endl;
        cout<<"Addition of num1 and num2 = "<<num1+num2<<endl;
    }
};

int main()
{
    A <int> a;
    a.num1=2;
    a.num2=2;
    a.add();

}















// CLASS TEMPLATE WITH MULTIPLE PARAMETERS




# include<iostream>
using namespace std;
template <class T1 , class T2>
class A
{
    public:
    T1 num1;
    T2 num2;

    void add()
    {
        cout<<"Value of num1 = "<<num1<<endl;
        cout<<"Value of num2 = "<<num2<<endl;
        cout<<"Addition of num1 and num2 = "<<num1+num2<<endl;
    }
};

int main()
{
    A <int , float> a;
    a.num1=2;
    a.num2=2.2;
    a.add();

}

















# include<iostream>
using namespace std;
template<class T>
class A
{
    private:
    T a;
    T b;

    public:
    void setdata(T q , T w)
    {
        a=q;
        b=w;
    }

    void display()
    {
        cout<<"Value of a = "<<a<<endl;
        cout<<"Value of b = "<<b<<endl;
    }


    void getdata()
    {
        cout<<"Multiplication = "<<a*b<<endl;
    }

};



int main()
{
    A <int> a;
    a.setdata(2,2);
    a.display();
    a.getdata();

}
















# include<iostream>
using namespace std;
template<class T , class T2>
class A
{
    private:
    T a;
    T2 b;

    public:
    void setdata(T q , T2 w)
    {
        a=q;
        b=w;
    }

    void display()
    {
        cout<<"Value of a = "<<a<<endl;
        cout<<"Value of b = "<<b<<endl;
    }


    void getdata()
    {
        cout<<"Multiplication = "<<a*b<<endl;
    }

};



int main()
{
    A <int , float> a;
    a.setdata(2,2.4);
    a.display();
    a.getdata();

}
