#include <iostream>
using namespace std;

template <class t>
class harry
{
public:
    int data;
    harry(t a)
    {
        data = a;
    }
    void display();
};
template <class t>
void harry<t>::display()
{
    cout << data << endl;
}
void func(int a)
{
    cout << "i am first func " << a << endl;
}
template <class t>
void func(t a)//templatized function
{
    cout << "i am templatized func " << a << endl;
}
int main()
{
    // harry<int> h(5);
    // cout << h.data << endl;
    // h.display();
    // return 0;
    func(4);//exact match takes the highest priority
}