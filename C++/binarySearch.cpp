#include <iostream>
using namespace std;

class Insertion
{
private:
    int n;
    int c = 0;
    int left, right, mid, k;
    int a[];

public:
    Insertion()
    {
        cout << "Enter the size of array -> ";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << "Enter the [" << c << "] element (!! DO NOT REPEAT !!) ->  ";
            cin >> a[i];
            c++;
        }
    }
    void binarySearch()
    {
        cout << "Enter the element you want to find -> ";
        cin >> k;
        left = 0;
        right = n;
        mid = (left + right) / 2;
        while (right >= left)
        {
            if (a[left] == k)
            {
                cout << "<----------     Item found at position " << left << "   ----------> " << endl;
                break;
            }
            else if (a[right - 1] == k)
            {
                cout << "<----------     Item found at position " << right - 1 << "   ----------> " << endl;
                break;
            }

            else if (a[mid] == k)
            {
                cout << "<----------     Item found at position " << mid << "   ----------> " << endl;
                break;
            }
            else if (a[mid] > k)
            {

                right = mid;
                mid = (left + right) / 2;
                if (a[mid] == k)
                {
                    cout << "<----------     Item found at position " << mid << "   ----------> " << endl;
                    break;
                }
            }
            else if (a[mid] < k)
            {

                left = mid;
                mid = (left + right) / 2;
                if (a[mid] == k)
                {
                    cout << "<----------     Item found at position " << mid << "   ----------> " << endl;
                    break;
                }
            }

            cout << "<----------   Item not present    ---------->" << endl;
            break;
        }
    }
};
int main()
{
    Insertion i;
    i.binarySearch();
    return 0;
}