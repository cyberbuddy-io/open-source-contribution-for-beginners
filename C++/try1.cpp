#include<iostream>
using namespace std;

class A{
    private:
    int x;
    int j;
    public:
    A(int k){
        x=k;
    }
    A operator +(int j) {
        x+=j;
    }
    void display(){
        cout<<x;
    }
};

int main(){
    A a(5);
    a+5;
    a.display();
    return 0;
}