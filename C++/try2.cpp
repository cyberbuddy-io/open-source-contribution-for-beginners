#include<iostream>
using namespace std;

class B{
    private:
    int x;
    public:
    B(int z){
        x=z;
    }
    void display(){
        cout<<x;
    }
    B operator-(float k){
        x=+k;
    }
};
int main(){
    int n;
    cout<<"enter a number : ";cin>>n;
    B b(n);
    b-5;
    b.display();
    return 0;
}