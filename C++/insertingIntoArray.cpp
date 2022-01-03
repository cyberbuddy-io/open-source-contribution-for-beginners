#include <iostream>
using namespace std;
class Insertion
{
private:
    int n;
    int a[];

public:
    Insertion()
    {
        cout << "Enter the size of array -> ";
        cin >> n;
        a[n];
        for (int i = 0; i < n; i++)
        {
            a[i] = 0;
        }
        cout << "<------------ Enter 0 for empty space ----------->" << endl
             << endl;
        cout << "Enter the elements of array -> "
             << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }
    int check()
    {
        int c=0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                cout << "<- Free space available at index -> " << i << endl
                     << endl;
            }
            else{
                c+=1;
            }

        }
        if(c==n){
            cout<<"<- No free space ->"<<endl;
        }
        }
    void ins()
    {
        int x;
        int y;
        cout << "Enter the element -> ";
        cin >> x;
        cout << "Enter the index where you want to add the element -> ";
        cin >> y;
        a[y] = x;
    }
    void del(){
        int x;
        int y;
        cout<<"Enter the index number to delete that element -> ";cin>>x;
        y=a[x];
        a[x]=0;
        cout<<"!! Deleted element -> "<<y<<endl;

    }
    void display()
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
            endl(cout);
        }
    }
};
int main()
{
    int j;
    Insertion i;
    do
    {
        cout << "Enter the option which you want to choose?\n1.Check space\n2.Insert element\n3.Delete element\n4.Display\n5.Clear Screen" << endl;
        cin >> j;
        cout << endl;
        switch (j)
        {
        case 1:
        {
            i.check();
            break;
        }
        case 2:
        {
            i.ins();
            break;
        }
        case 3:{
            i.del();
            break;
        }
        case 4:
        {
            i.display();
            break;
        }
        case 5:
        {
            system("cls");
            break;
        }
        default:
        {
            cout << "!! Invalid Choice !!" << endl;
        }
        }
    } while (1 > 0);
    return 0;
}