#include<iostream>
using namespace std;

class A{
    public:
    void di(){
        cout<<"hey, there"<<endl;
    }
};
class B :public A{
    public:
    void dis(){
        cout<<"how are you?"<<endl;
    }
};
class C :public B{
    public:
    void disp(){
        cout<<"what is your name sir ?";
    }
};
int main(){
    C c;
    c.di();
    c.dis();
    c.disp();
    return 0;
}