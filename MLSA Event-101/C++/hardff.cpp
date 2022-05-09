#include <iostream>
using namespace std;
class c2; // fwd declaration
class c1
{
    friend void exchange(c1 &, c2 &);

private:
    int val1;

public:
    void indata(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << val1 << endl;
    }
};
class c2
{
    friend void exchange(c1 &, c2 &);

private:
    int val2;

public:
    void indata(int b)
    {
        val2 = b;
    }
    void display(void)
    {
        cout << val2 << endl;
    }
};

void exchange(c1 &x, c2 &y)
{
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}
int main()
{
    c1 oc1;
    c2 oc2;

    oc1.indata(3);
    oc2.indata(9);
    cout << "Value of c1:" << endl;
    oc1.display();
    cout << "Value of c2:" << endl;
    oc2.display();

    cout << "Afetr changing the values:" << endl;
    exchange(oc1, oc2);

    cout << "Value of c1:" << endl;
    oc1.display();
    cout << "Value of c2:" << endl;
    oc2.display();

    return 0;
}