#include<iostream>
using namespace std;

class triangle{
    public:
    triangle(){
        float a=3,b=4,c=5;
        float height=4,base=3;
        cout<<"Area of triangle:-> "<<(height+base)/2<<endl;
        cout<<"Parameter of triangle:-> "<<a+b+c<<endl;
    }
};
int main(){
    triangle t;
}