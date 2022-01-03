#include <iostream>
using namespace std;

class number{
    int a,b,c;
    public:
    number(){
        a=0;
    }
    number(int x){
        a=x;
    }
    number(number &obj){
        cout<<"constructor called!!!!!!"<<endl;
        a=obj.a;
    }
    void print(void){
    cout<<"the number of your object is: "<<a<<endl;
    }
};
int main(){
    number x1,x2(6),x3(7);
    x1.print();
    x2.print();
    x3.print();

    number y1(x3);
    y1.print();
    return 0;
}
