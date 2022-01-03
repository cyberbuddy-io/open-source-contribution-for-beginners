#include <iostream>
using namespace std;

class geeks{
    public:
    int  a;
    geeks(){
        a=-1;
        cout<<"your default construtor is being called : "<<a<<endl;
        
    }
    geeks(int x){
        cout<<"your parameterized constructor is being called : "<<x<<endl;
    }
};
int main(){
    int x;
    cout<<"enter a number : "; cin>>x;
    geeks g(x);

    return 0;
}
