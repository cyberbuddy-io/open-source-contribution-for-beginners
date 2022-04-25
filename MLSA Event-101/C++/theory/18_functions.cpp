#include<bits/stdc++.h>
using namespace std;

// int sum(int a,int b){
//     int c=a+b;//Formal parameters
//     return c;
// }
int sum(int a,int b);//Function Prototype --> assure compiler to go ahead of main in search of sum()
void empty(){
    cout<<"Hello Rohit";//void returns nothing
}

int main(){
    int num1,num2;//Actual parameters
    cin>>num1>>num2;
    cout<<sum(num1,num2)<<endl;
    empty();
    
    return 0;
}

int sum(int a,int b){
    int c=a+b;
    return c;
}