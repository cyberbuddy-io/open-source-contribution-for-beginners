#include<iostream>
using namespace std;

class pattern{
    public:
    pattern(){
        for(int i=0;i<6;i++){
            for(int j=i+1;j<6;j++){
                cout<<"#"<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    pattern p;
    return 0;
}