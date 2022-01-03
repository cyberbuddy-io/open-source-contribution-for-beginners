#include <iostream>
using namespace std;

int main(){
    float x,c;
    cout<<"enter temperature in fahrenheit : ";
    cin>>x;
    c = ((5.0/9.0)*(x-32.0));
    cout<<"the temperature in degree celcius is : "<<c<<" celcius";
    return 0;
}
