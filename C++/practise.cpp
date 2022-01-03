#include <iostream>
using namespace std;

class sum{
    int a,b,c;
    public:
    friend void sm(sum,sum);
};
 void sm(sum x,sum y){
     x.c= x.a+x.b;
    cout<<"the sum of numbers is : "<<x.c;
}
int main(){
    int o1,o2;
    cout<<"enter two numbers to find there sum: ";
    cin>>o1>>o2;
    sm(o1,o2);
    return 0;
}
