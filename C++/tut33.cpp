#include <iostream>
using namespace std;
class simple{
    int data1,data2,data3;
    public:
    simple(int a ,int b=23, int c=23){
        data1=a;
        data2=b;
        data3=c;
    }
    void print();
};
void simple::print(void){
    cout<<"the value of your data1,data2 and data3 is: "<<data1<<","<<data2<<" and "<<data3<<endl;
}
int main(){
    simple s(1);
    s.print();
    return 0;
}
