#include<iostream>
using namespace std;

class pattern{
    public:
    pattern(){
        for(int i=1;i<5;i++){
            for(int j=i;j<5;j++){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    pattern p;
    return 0;
}