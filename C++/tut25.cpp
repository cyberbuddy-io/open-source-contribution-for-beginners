#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the id : " << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of employee is " << id << " and employee number is : " << count << endl;
    }
    static void county(void)
    {
        cout << "your count is : " << count << endl;
    }
};
int employee ::count = 1000;
int main()
{
    employee simmu, jaffy, gursirath;
    simmu.setdata();
    simmu.getdata();
    employee::county();

    jaffy.setdata();
    jaffy.getdata();
    employee::county();

    gursirath.setdata();
    gursirath.getdata();
    employee::county();
    return 0;
}
