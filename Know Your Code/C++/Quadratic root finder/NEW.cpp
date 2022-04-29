#include<iostream>
#include<cmath>
using namespace std;

class QuadEquation
{
    float first_coffecient,second_cofficient,constant;
    double discr=(second_cofficient*second_cofficient)-(4*first_coffecient*constant);
public:
    void set_equation(float first_coffecient,float second_cofficient,float constant)
    {
        this->first_coffecient=first_coffecient;
        this->second_cofficient=second_cofficient;
        this->constant=constant;
    }
    float getroot1()
    {
        return (-second_cofficient/(2*first_coffecient))-(sqrt(discr))/(2*first_coffecient);
    }
    float getroot2()
    {
        return (-second_cofficient/(2*first_coffecient))+(sqrt(discr))/(2*first_coffecient);
    }
};
int main()
{
    QuadEquation eq;
    eq.set_equation(1,4,4);
    cout<<"First Root:"<<eq.getroot1();
    cout<<"\nSecond Root:"<<eq.getroot2();
}
