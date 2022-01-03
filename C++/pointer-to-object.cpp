#include<iostream>
using namespace std;

class complex{
public:
int real,imaginary;
void getdata(){
    cout<<"the real part is "<<real<<endl;
    cout<<"the imaginary part is "<<imaginary<<endl;
}
void setdata(int a,int b){
    real=a;
    imaginary=b;
}
};
int main(){
    // complex c1;
    // complex *ptr=&c1;
    complex *ptr=new complex;
    // (*ptr).setdata(4,7);    is exactly same as
    ptr->setdata(4,7);
    (*ptr).getdata();
    return 0;
}