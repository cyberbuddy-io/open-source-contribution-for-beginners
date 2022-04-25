// C++ program to overload sum() function

#include <iostream>
using namespace std;

// Function with 2 int parameters
int sum(int num1, int num2) {
    return num1 + num2;
}

// Function with 2 double parameters
double sum(double num1, double num2) {
    return num1 + num2;
}

// Function with 3 int parameters
int sum(int num1, int num2, int num3) {
    return num1 + num2 + num3;
}

int main() {
    // Call function with 2 int parameters
    cout << "Sum 1 = " << sum(5, 6) << endl;

    // Call function with 2 double parameters
    cout << "Sum 2 = " << sum(5.3, 6.2) << endl;

    // Call function with 3 int parameters
    cout << "Sum 3 = " << sum(5, 6, 7) << endl;

    return 0;
}