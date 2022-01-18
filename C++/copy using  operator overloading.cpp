#include<iostream>
#include<string.h>
using namespace std;
class demo
{
private:
    char a[10];
public:
    void operator < (char p[10])
    {
        strcpy(a,p);
    }
    void display()
    {
        cout<<a;
    }
};
int main()
{
    demo obj;
    char r[50]="vmm education";
    obj<r;
    obj.display();
}
