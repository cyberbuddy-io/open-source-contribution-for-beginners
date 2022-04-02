#include<bits/stdc++.h>
using namespace std;

int add(int a,int b){
    cout<<"Add"<<endl;
    return a+b;
}

int sum(int a,int b, int c){
    cout<<"Sum"<<endl;
    return a+b+c;
}

int volume(double r,int h){
    return (3.14 * r * r * h);
}

int area(int s){
    return (s * s);
}

int area(float r){
    return (3.14 * r * r);
}

int main(){
    cout<<add(4,7.2)<<endl;//automatically typecast float to int
    cout<<sum(2,4,6)<<endl;
    cout<<"Volume of Cylinder = "<<volume(3.4, 5)<<endl;
    cout<<"Area of Square = "<<area(5)<<endl;
    cout<<"Area of Circle = "<<area(6.45f)<<endl;//By Default - double
    
    return 0;
}