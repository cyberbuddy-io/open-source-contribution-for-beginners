#include<iostream>
using namespace std;

class baseclass{
public:
int var_base=1;
virtual void display(){
    cout<<"displaying base class variable "<<var_base<<endl;
}
};
class derivedclass:public baseclass{
public:
int var_derived=2;
void display(){
    // cout<<"displaying base class variable "<<var_base<<endl;
    cout<<"displaying derived class variable "<<var_derived<<endl;
}
};
int main(){
    baseclass*base_ptr;
    baseclass obj_base;
    derivedclass obj_derived;
    base_ptr=&obj_derived;
    base_ptr->display();
    return 0; 
}