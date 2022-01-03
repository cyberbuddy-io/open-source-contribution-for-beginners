#include<iostream>
using namespace std;

class base1{
    public:
        void greet(void){
            cout<<"how are you? "<<endl;
        }
};
class base2{
    public:
    void greet(void){
        cout<<"kaise ho?"<<endl;
    }
};
class derived:public base1,public base2{
    int a;
    public:
    void greet(){
        base1::greet();
        base2::greet();
    }
};
class b{
    public:
    void say(){
        cout<<"hello world!!"<<endl;
    }
};
class d:public b{
    int a;
    public:
    void say(){
        cout<<"hello world beautiful people!!"<<endl;}//if same funtion made in drived class it overwrite the function of parent funtion
    
};
int main(){
    // ambiguity 1


    // base1 obj1;
    // base2 obj2;
    // obj1.greet();
    // obj2.greet();
    // derived d;
    // d.greet();

    // ambuigity 2

    // b b;
    // b.say();
    d da;
    da.say();
    return 0;
}
