#include <iostream>
using namespace std;

int main()
{
    int i, n;
    cout << "enter number to check whether it is prime or not: ";
    cin >> i;
    for (n = 2; n < i; n++){
        if ((i % n) == 0)
        {
            cout << "it is not a prime number.";
            break;
        }
    }
    if (i == n){
        cout << "is a prime number."; 
        }
    return 0;
}
