#include<iostream>
using namespace std;
class a
{
private:
    int x;
    friend class b;
public:
    a()
    {
        x=90;
    }
};
class b
{
public:
    void test()
    {
        a obj;
        cout<<obj.x;
    }
};
int main()
{
    b obj;
    obj.test();
}
