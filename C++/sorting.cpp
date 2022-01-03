#include <iostream>
using namespace std;

class sort
{
private:
    int i;
    int n;
    int x;
    int temp;
    int a[];

public:
    void getdata()
    {
        cout << "enter size of array: ";
        cin >> n;
        a[x];
        cout << "enter elements to add into array: " << endl;
        for (i = 0; i < n; i++)
        {
            cin >> x;
            a[i] = x;
        }
    }
    void sorting()
    {
        cout << "before sorting " << " ";
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << endl;
        }
        for (int j = 0; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (a[j] > a[k])
                {
                    temp = a[j];
                    a[j] = a[k];
                    a[k] = temp;
                }
            }
        }
        cout << "after sorting " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
};
int main()
{
    sort s;
    s.getdata();
    s.sorting();
}