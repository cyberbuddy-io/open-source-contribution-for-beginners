#include<iostream>
using namespace std
class demo
{
    private:
    int a,b,c;
    public:
    demo(int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
    void display()
    {
        cout<<endl<<a<<endl<<b<<endl<<c;
    }
};
int main()
{
    demo obj(10,20,30);
    obj.display();
}