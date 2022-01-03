// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member functions
#include <iostream>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void check(void);
    void ones(void);
    void display(void);
    void display2(void);
};

void binary ::read(void)
{
    cout << "enter a binary number : ";
    cin >> s;
}
void binary ::check(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '1' && s.at(i) != '0')
        {
            cout << "your given number is not binary.";
            exit(0);
        }
        else{
            cout<<"\ncongrats !!!! you have a binary number.";
            break;
        }
    }
}
void binary ::ones(void)
{
    check();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout << "\ndisplaying your given number : " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
}
void binary ::display2(void)
{
    cout << "\ndisplaying your ones complement of binary number : " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
}
int main()
{   binary b;
    b.read();
    b.display();
    b.ones();
    b.display2();
    return 0;
}
