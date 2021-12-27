//Factorial ==> 5! = 5*4*3*2*1 = 5 * 4! ==> n! = n * (n-1)!

#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if (n<=1)
    {
        return 1;
    }
    
    return n * factorial(n-1);
}

int fib(int a){
    if (a<2)    
    {
        return 1;
    }
    
    return fib(a-2) + fib(a-1);
}

int main(){
    int n;
    cout<<"Enter a number = ";
    cin>>n;
    // cout<<"Factorial = "<<factorial(n);
    cout<<"Fibonacci = "<<fib(n);

    return 0;
}

//Febonacci Series ==> 1 1 2 3 5 8 13 21 34 ........==> n = (n-1) + (n-2)
                    