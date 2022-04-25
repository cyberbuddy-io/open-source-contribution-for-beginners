/*
 This program checks whether the given number is a power of 2 or not  
*/
#include<iostream>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    if( !(n & n-1)){
        cout<<"Yes given number is power of 2"<<endl;
    }
    else {
        cout<<"No given number is not the power of 2"<<endl;
    }
}