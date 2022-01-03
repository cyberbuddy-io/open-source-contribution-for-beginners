#include<iostream>
using namespace std;


template<class t>
void swapp(t &a,t &b){
    t temp=a;
    a=b;
    b=temp;
}
template<class t1,class t2>
int funcaverage(t1 a,t2 b){
    float avg=(a+b)/2.0;
    
    return avg;
}
int main(){
    float a=funcaverage(5,2);
    cout<<"average of them is: "<<a<<endl;
    int x=5,y=7;
    swapp(x,y);
    cout<<x<<endl<<y;
    
    return 0;
}