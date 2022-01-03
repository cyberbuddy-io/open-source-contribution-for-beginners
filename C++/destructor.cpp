#include <iostream>
using namespace std;

class geeks{
    public:
    int  a;
    ~geeks(){
        a=-1;
        cout<<"your destructor is being called : "<<a<<endl;
    }
};
int main(){
    geeks g();

    return 0;
}
