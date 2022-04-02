#include <iostream>
using namespace std;

class prime_num{
    public:
    prime_num(int a){
        int count=0;
        for(int i=1;i<=a;i++){
            if(a%i==0){
                count++;
                break;
            }
        }
        if(count==2){
            cout<<a<<" is prime"<<endl;
        }
        else{
            cout<<a<<" is non prime";
        }
    }
};

int main(){
    prime_num obj(27);
    return 0;
}