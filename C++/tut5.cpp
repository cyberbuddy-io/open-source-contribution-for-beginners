#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b;
    a=10,b=20;
    //arithmetic operators are: + - * / % ** ++ --
    cout<<"\nthe sum of two numbers is: "<<a+b;
    cout<<"\n\nthe difference between two numbers is: "<<a-b;
    cout<<"\nthe multiplication of two numbers is: "<<a*b;
    cout<<"\nthe division of two numbers is: "<<a/b;
    cout<<"\nthe remainder/modulus  of two numbers is: "<<a%b;
    cout<<"\nthe ** gives the answer with first variable as a number and second as its power is: "<<pow(a,b);
    cout<<"\nthe increment of a is: "<<a++;
    cout<<"\nthe decrement is: "<<a--;
    //assignment operator is = it is used to assign value to a variable
    //c= 9
    //comparison operators are < > <= >= == !=
    cout<<"\ngives if a greater than b: "<<(a>b);
    cout<<"\ngives if a is less than b: "<<(a<b);
    cout<<"\ngives if a greater than equal to b: "<<(a>=b);
    cout<<"\ngives if a is less than equal to b: "<<(a<=b);
    cout<<"\ngives if a is equal to b: "<<(a==b);
    cout<<"\ngives if a is not equal to b: "<<(a!=b);
    // logical operator just gives logic to the calculation
    // && is and operator if checks if both the conditions are fulfilled
    // || is or operator if checks if atleast one of the conditions is true
    cout<<"\nlogical operator (a==b)&&(a<=b) : "<<(a==b)&&(a<=b);
    cout<<"\nlogical operator (a==b)||(a>=b) : "<<(a==b)||(a>=b);
    return 0;
}   