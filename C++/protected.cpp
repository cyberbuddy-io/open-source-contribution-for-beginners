#include<iostream>
using namespace std;

class base{
    protected:
    int a;
    private:
    int b;
};
class derived: protected base{

};
int main(){
    base b;
    derived d;
    cout<<d.a;//since a is protected in bith base as well as derived class
    return 0;
}