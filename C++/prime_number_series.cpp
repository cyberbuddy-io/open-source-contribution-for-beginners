#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= n; i++)
    {
        if (n % 1 == 0)
        {
            return false;
        }
    }
    return true;
}
void primeseries(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
            cout << " i " << i;
    }
}
int main()
{
    int x;
    cout << "enter number upto which you want to check prime number : ";
    cin >> x;
    primeseries(x);
}
