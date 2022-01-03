#include<iostream>
using namespace std;

class A{
    int a;
    public:
       /* A&*/void setdata(float a){
            //this keyword which is a pointer which points to the object which invokes the member function
            this->a=a;
            // return *this;
        }
        void getdata(){
            cout<<"The value of a is "<<a<<endl;
        }
};
int main(){
    A a;
    a.setdata(4);
    a.getdata();
    return 0;
}