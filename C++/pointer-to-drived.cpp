#include<iostream>
using namespace std;

class baseclass{
public:
int var_base;
void display(){
    cout<<"displaying base class variable "<<var_base<<endl;
}
};
class derivedclass:public baseclass{
public:
int var_derived;
void display(){
    // cout<<"displaying base class variable "<<var_base<<endl;
    cout<<"displaying derived class variable "<<var_derived<<endl;
}
};
int main(){
    baseclass *baseclass_ptr;
    baseclass obj_base;
    derivedclass obj_derived;
    baseclass_ptr=&obj_derived;

    baseclass_ptr->var_base=34;
    baseclass_ptr->display();

    derivedclass *derived_ptr;
    derived_ptr=&obj_derived;
    derived_ptr->var_derived=98;
    derived_ptr->display();
    return 0; 
}