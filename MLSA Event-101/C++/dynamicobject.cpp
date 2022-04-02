#include<iostream>
using namespace std;
class demo
{
private:
    int a,b,c;
public:
    demo(int x, int y, int z)
    {
        a=x;
        b=y;
        c=z;
    }
void display()
{
    cout<<a<<b<<c;
}
};
int main()
{
    demo *p;
    p = new demo (10,20,30);
    p->display();
    delete p;
}
/*
{
public:
    int a,b,c;
    void display()
    {
        cout<<a<<b<<c;
    }
};
int main()
{
    demo *p;
    p=new demo();
    p->a=100;
    p->b=300;
    p->c=300;
    p->display();
    delete p;
}
*/
