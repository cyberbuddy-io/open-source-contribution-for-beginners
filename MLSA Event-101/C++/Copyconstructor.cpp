#include <iostream>
using namespace std;
class number
{
    int a;

public:
    number()
    {
        a = 0;
    };
    number(int num)
    {
        a = num;
    }
    // Creating the copyconstructor!!!
    // When there is NO copy constructor then complier called self-made copyconstructor....

    number(number &obj)
    {
        a = obj.a;
        cout << "Copy constructor is called::!!!!!!!!" << endl;
    }
    void display()
    {
        cout << "The value for givin number is:" << a << endl;
    }
};

int main()
{
    number x, y, z(45), z2;
    z.display();
    x.display();
    y.display();

    number z1(z); // CopyConstructor invoked...
    z1.display();

    z2 = x;        // copyConstructor not Invoked, As the object z2 is already created.
    z2.display();
    
    number z3 = z; // This copyConstructor is called As the object is created here.
    z3.display();
    
    
    return 0;
}