#include <iostream>
using namespace std;

class B;//forward declaration of class B because compiler will dont know what is the datatype B in friend function
class A{
    int a;
    public:
    void setdata(int x){
        a=x;
    }
    void printdata(void){
        cout<<"your number is : "<<a<<endl;
    }
    friend void sum(A ,B);//making the function sum the friend of class A
};
class B{
    int b;
    public:
    void setdata(int y){
        b=y;
    }
    void printdata(void){
        cout<<"your second number is : "<<b<<endl;
    }
    friend void sum(A,B);//making the sum function friend of class B 

};
void sum(A c1,B c2){//making the function using class A and class B as a datatype for function parameters
    cout<<"the sum of two numbers is : "<<(c1.a+c2.b)<<endl;//accessing the data variables of class A and class B using the dot operator
}

int main(){
    A o1;
    o1.setdata(5);
    o1.printdata();

    B o2;
    o2.setdata(5);
    o2.printdata();

    sum(o1,o2);//calling sum function by giving the o1 and o2 as the parameters
    return 0;
}
