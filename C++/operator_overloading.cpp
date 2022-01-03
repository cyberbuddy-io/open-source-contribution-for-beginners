#include <iostream>
using namespace std;
class demo
{
public:
    int a[10];
    demo()
    {
        cout << "enter 10 numbers : ";
        for (int i = 0; i <= 9; i++)
        {
            cin >> a[i];
        }
        
        }
    void display()
        {
            for (int i = 0; i <= 9; i++)
            {
                cout << a[i]<<" ";
            }
        }
    demo operator + (int x)
    {
        for (int i = 0; i <= 9; i++)
        {
            a[i] = a[i] + x;
        }
    }
            
};
int main()
{
    demo obj;
    obj + 5;
    obj.display();
}