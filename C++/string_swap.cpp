#include<iostream>
#include<string>
using namespace std;

int main(){
   string a,b;
   cin>>a;
   cin>>b;
   cout<<a.length()<<" "<<b.length()<<endl; 
   cout<<a+b<<endl;
   swap(a[0], b[0]);     // swap(a,b) function
   cout<<a<<" "<<b;

    return 0;
}