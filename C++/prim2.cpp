#include<iostream>
using namespace std;

class prime{
    private:
    int a;
    public:
    void check(int x){
        a=x;
        if(a==1 || a==2){
            cout<<"Prime!!";
            exit;
        }
        for(int i=2;i<a;i++){
            if (a%i==0){
                cout<<"Not Prime!!";
                break;
            }
            else{
                cout<<"Prime!!";
                break;
            }
        }
    }
};
int main(){
    prime p;
    int z;
    cout<<"enter number to check if the number is prime or not: ";
    cin>>z;
    p.check(z);
}