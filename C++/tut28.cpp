#include <iostream>
using namespace std;

class complex{
    public:
    int a ,b;
    void setnumber(int x,int y){
        a=x;
        b=y;
    }
    friend complex sumcomp(complex o1, complex o2);
    void printnumber(void){
        cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;

    }
};
complex sumcomp(complex o1, complex o2){
    complex o3;
    o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}

int main(){
    complex c1,c2,sum;
    c1.setnumber(5,6);
    c1.printnumber();

    c2.setnumber(4,6);
    c2.printnumber();

    sum=sumcomp(c1,c2);
    sum.printnumber();
    return 0;
}
