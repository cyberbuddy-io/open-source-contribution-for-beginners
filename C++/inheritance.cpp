#include <iostream>
using namespace std;

class employee
{
public:
    int id;
    int salary;
    employee(int inid)
    {
        id = inid;
        salary = 55;
    }
    employee() {}
};

class programmer : employee
{
public:
    int languagecode;
    programmer(int inid)
    {
        id = inid;
        languagecode = 9;
    }
    void getdata(void)
    {
        cout << id << endl
             << languagecode;
    }
};
int main()
{
    employee sam(1), jaff(2);
    cout << sam.id << endl
         << sam.salary << endl;
    cout << jaff.id << endl
         << jaff.salary << endl;
    programmer skill(10);
    skill.getdata();
    return 0;
}