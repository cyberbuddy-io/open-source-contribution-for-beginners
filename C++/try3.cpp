// C++ program to Add two complex numbers  
#include <bits/stdc++.h>  
using namespace std;  
  
class Complex {  
public:  
    int real; // To store real part of complex number  
    int imaginary; // To store imaginary part of complex number  
  
    Complex()  
    {  
    // Initial values are zero   
        real = 0;  
        imaginary = 0;  
    }  
    Complex(int r, int i)  
    {  
        real = r; // r is initialized during object creation  
        imaginary = i; // i is initialized during object creation  
    }  
  //hi my name is sukhmeet singh and i am trying to learn complex number here
    Complex addComplexNumber(Complex C1, Complex C2)  
    {  
  
        Complex res; // result object of complex class  
  
        // adding real part of complex numbers  
        res.real = C1.real + C2.real;  
  
        // adding Imaginary part of complex numbers  
        res.imaginary = C1.imaginary + C2.imaginary;  
  
        // returning the sum  
        return res;  
    }  
};  
  
// Main Class  
int main()  
{  
  
    // First Complex number  
    Complex C1(4, 5);  
  
    // printing first complex number  
    cout << "Complex number 1 : " << C1.real  
         << " + i" << C1.imaginary << endl;  
  
    // Second Complex number  
    Complex C2(8, 9);  
  
    // printing second complex number  
    cout << "Complex number 2 : " << C2.real  
         << " + i" << C2.imaginary << endl;  
  
    // for Storing the sum  
    Complex C3;  
  
    // calling addComplexNumber() method  
    C3 = C3.addComplexNumber(C1, C2);  
  
    // printing the sum  
    cout << "Sum of complex number : "  
         << C3.real << " + i"  
         << C3.imaginary;  
  
    cout << endl  
         << endl;  
    // Test for second input  
    // First Complex number  
    Complex A(2, 7);  
  
    // printing first complex number  
    cout << "Complex number 1 : " << A.real  
         << " + i" << A.imaginary << endl;  
  
    // Second Complex number  
    Complex B(10, 6);  
  
    // printing second complex number  
    cout << "Complex number 2 : " << B.real  
         << " + i" << B.imaginary << endl;  
  
    // for Storing the sum  
    Complex C;  
  
    // calling addComplexNumber() method  
    C = C.addComplexNumber(A, B);  
  
    // printing the sum  
    cout << "Sum of complex number : "  
         << C.real << " + i"  
         << C.imaginary;  
}  