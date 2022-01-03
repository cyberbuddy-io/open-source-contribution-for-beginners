#include <iostream>
using namespace std;

class base1
{
protected:
    int baseline;

public:
    void setbase(int a)
    {
        baseline = a;
    }
};
class base2
{
protected:
    int base2line;

public:
    void setbase2(int a)
    {
        base2line = a;
    }
};
class base3{
    protected:
        int base3line;
    public:
        void setbase3(int a){
            base3line=a;
        }
};
class derived : public base1,public base2,public base3{
    public:
        void show(){
            cout<<"the value of base 1 is "<<baseline<<endl;
            cout<<"the value of base 2 is "<<base2line<<endl;
            cout<<"the value of base 3 is "<<base3line<<endl;
            cout<<"the sum of two values is "<<baseline+base2line+base3line<<endl;
        }
};
int main()
{
    derived simmu;
    simmu.setbase(25);
    simmu.setbase2(5);
    simmu.setbase3(33);
    simmu.show();
    return 0;
}