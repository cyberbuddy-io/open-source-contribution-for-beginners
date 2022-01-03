#include<iostream>
using namespace std;

class parent{
    public:
   void dis(){
       cout<<"hello";
   }
};
class child :public parent{

};
int main(){
    child c;
    c.dis();
    return 0;
}
