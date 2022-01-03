#include<iostream>
using namespace std;

class student{
    protected:
        int roll_num;
    public:
        void setnum(int);
        void getnum(void);
};
void student :: setnum(int r){
    roll_num=r;
}
void student :: getnum(void){
    cout<<"the roll number is "<<roll_num<<endl;
}
class exam : public student{
    protected:
        float maths;
        float phy;
    public:
        void setmarks(float,float);
        void getmarks(void);
};
void exam :: setmarks(float m1,float m2){
    maths=m1;
    phy=m2;
}
void exam :: getmarks(void){
    cout<<"the marks obtained in physics is "<<phy<<endl;
    cout<<"the marks obtained in mahs is "<<maths<<endl;
}
class result : public exam{
    float percentage;
    public:
        void display();
};
void result :: display(){
    getnum();
    getmarks();
    cout<<"your percentage is "<<((maths+phy)/2)<<"%"<<endl;

}
int main(){
    result simmu;
    simmu.setnum(420);
    simmu.setmarks(99.9,90);
    simmu.display();
    return 0;
}