// //to check fibonacci series position
// #include <iostream>
// using namespace std;

// int fibonacci(int n){
//     if (n<2)
//         return 1;
//     else
//         return fibonacci(n-2) + fibonacci(n-1);
// }
// int main(){
//     int x;
//     cout<<"enter the number whose fibonacci number you want : ";
//     cin>>x;
//     cout<<"the fibonacci number at position "<<x<<" is "<<fibonacci(x);
//     return 0;
// }


//to check the fibonacci series
#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        // Prints the first two terms.
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << ", ";
    }
    return 0;
}