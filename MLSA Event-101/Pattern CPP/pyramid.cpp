
//Print Half pyramid pattern using stars

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter no of rows"
    cin>>n;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++){
          cout<<"*";
        }
         cout<<"\n";
    }
       
        return 0;
}