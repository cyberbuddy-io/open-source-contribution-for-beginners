#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    string name;
    int roll_no;
    int phone;
    void print(string a, int b, int c)
    {
        name = a;
        roll_no = b;
        phone = c;
        cout << "The name of student:-> " << name << endl
             << "Roll Number:-> " << roll_no << endl
             << "phone:-> " << phone << endl;
    }
};

int main()
{
    student s;
    int x;
    string p;
    int q, r;
    cout << "enter how many records you want to enter: ";
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cout << "enter name of the student: " << endl;
        cin >> p;
        cout << "enter roll sinnumber of the student: " << endl;
        cin >> q;
        cout << "enter phone number of the student: " << endl;
        cin >> r;
        s.print(p, q, r);
    }
}