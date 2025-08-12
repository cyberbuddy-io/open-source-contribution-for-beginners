#include<iostream>
using namespace std;

class Int{
    int a;
    public:
    void get(){
        cout<<"Enter the number"<<endl;
        cin>>a;
    }
    void display(){
        cout<<a<<endl;
    }
    Int operator +(Int e){
      Int temp;
      temp.a = (a)*(e.a);
      return temp;
    }
};
 
int main(){
    Int d,e;
    d.get();
    e.get();
    Int ans = d + (e);
    ans.display();
    return 0;
}