#include <iostream>
using namespace std;

class A
{
public:
    void display1()
    {
        cout<<endl<<"hello display from class A";
    }
};

class B : virtual public A
{
public:
    void display2()
    {
        cout<<endl<<"hello display from class B";
    }
};

class C :virtual public B
{
public:
    void display3()
    {
        cout<<endl<<"hello display from class c";
    }
};

class D : virtual public B ,public C
{
public :
    void display4()
    {
        cout<<endl<<"hello display form class d";
    }
};

int main()
{
    D obj;
    obj.display1();
    obj.display2();
    obj.display3();
    obj.display4();
}

