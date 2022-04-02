/* 
Question - Write a program which reads an array of size 10 and print the sum of prime numbers among array using class.   
*/
#include<iostream>
using namespace std;
class prime{
    int sum;
    int arr[10];
    public:
    void get(){
        sum = 0;
        cout<<"Enter the values for array element"<<endl;
        for(int i=0;i<10;i++){
           cin>>arr[i];
        }
    }
    bool isprime(int a){
        if(a==1 || a==0) return false;
        for(int i=2;i<=a/2;i++){
            if(a%i==0){
                return false;
            }
        }
        return true;
    }
    void findsum(){
         for(int i=0;i<10;i++){
            if(isprime(arr[i])){  // you can also write if(isprime(arr[i]==true))
                  sum+= arr[i];                
            }
         }         
         cout<<"The value of sum is : "<<sum<<endl;
    }
};

int main(){
     prime p;
     p.get();
     p.findsum();   
    return 0;
}