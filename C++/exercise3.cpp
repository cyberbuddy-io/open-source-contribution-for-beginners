#include<iostream>
#include<cmath>
using namespace std;

class simplecalc{
    protected:
        int a,b;
    public:
        void setnum(int x,int y){
            a=x;
            b=y;
        }
        void cal(void){
            cout<<"sum of two numbers is "<<a+b<<endl;
            cout<<"diff of two numbers is "<<a-b<<endl;
            cout<<"mult of two numbers is "<<a*b<<endl;
            cout<<"division of two numbers is "<<a/b<<endl;
        }
};
class scicalc{
    protected:
    int a ,b;
    public:
        void calc(void){
            cout<<"the answer of a power b is "<<pow(a,b)<<endl;
            cout<<"the sin of a is "<<sin(a)<<endl;
            cout<<"the cosine of b is "<<cos(b)<<endl;
            cout<<"the sqrt of a  is "<<sqrt(a)<<endl;
        }
};
class hybridcalc : public simplecalc,public scicalc{
    public:
        void display(void){
            cout<<"the calculations in multiple inherited hybrid class is "<<endl;
            cal();
            calc();
        }
};
int main(){
    hybridcalc h;
    h.setnum(30,60);
    h.display();
    return 0;
}