#include <iostream>
using namespace std;

class complex{
    int xx,yy;
    public:
    complex(void);
    void printnumber(void){
        cout<<"your complex number is : "<<xx<<" + "<<yy<<"i"<<endl;
    }
};
complex::complex(void){
    xx=13;
    yy=24;
}

int main(){
    complex c;
    c.printnumber();
    return 0;
}
