#include<iostream>
using namespace std;
class stacks
{
private:
    int top;
    int n;
    int i = 0;
    int arr[];

public:
    stacks()
    {
        cout << "enter the size of stack: ";
        cin >> n;
        arr[n];
        for (int i = 0; i < n; ++i)
        {
            arr[i] = 0;
            cout << " |        " << arr[i] << "        | " << endl;
            top = -1;
        }
        cout << " ___________________" << endl;
    }
    void full()
    {
        if (top == n)
        {
            cout << "<-------------------stack overflow!!-------------------->" << endl;
            return;
        }
        else if(top==n-1){
            cout<<"######### stack full ############ "<<endl;
        }
    }
    void empty()
    {
        if (top == -1)
        {
            cout << "<-------------------stack underflow!!----------------------->" << endl;
            return;
        }
    }
    void insert()
    {
        int x;
        cout << "enter to element to add into stack: ";
        cin >> x;
        arr[i] = x;
        ++top;
        ++i;
        cout << endl;
        full();
        
        return;
    }
    void del()
    {
        int y;
        y = arr[top];
        arr[top] = 0;
        cout<<"deleted element-> "<<y<<endl;
        empty();
        top--;
        return;
    }
    void display()
    {
        for (int i = n - 1; i >= 0; i--)
        {
            cout << " |        " << arr[i] << "         | " << endl;
        }
        cout << " ____________________" << endl
             << endl;
    }
};
int main()
{
    stacks s;
    while (true)
    {
        int z;
        cout << "enter your choice? Press Ctrl+C to exit the program.\n1.Insert\n2.Delete\n3.Display\n4.Clear Screen" << endl;
        cin >> z;
        switch (z)
        {
        case 1:
        {
            s.insert();
            break;
        }
        case 2:
        {
            s.del();
            break;
        }
        case 3:
        {
            s.display();
            break;
        }
        case 4:
        {
            system("cls");
            break;
        }
        default:
            cout << "invalid choice!!" << endl;
            break;
        }
    }
    return 0;
}