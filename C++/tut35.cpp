#include <iostream>
using namespace std;

int count=0;
class num{
    public:
    num(){
    count++;
    cout<<"the number for the object is given and the constructor is called: "<<count<<endl;
    }
    ~num(){
        count--;
        cout<<"the number for the object is given and the destructor is called: "<<count<<endl;
    }
};
int main(){
    num n;

    return 0;
}
