#include<iostream>
using namespace std;

class A{
    private:
    int a=5;
    int b=6;
    public:
    friend void sum(A);
};
void sum(A x){
    cout<<(x.a)+(x.b);
}
int main(){
    A a;
    sum(a);
    return 0;
}