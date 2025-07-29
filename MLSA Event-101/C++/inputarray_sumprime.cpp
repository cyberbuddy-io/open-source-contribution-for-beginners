#include <iostream>
using namespace std;
class A{
    public:
    int arr[10];
    void read_array(){
        for(int i=0;i<10;i++){
            cin>>arr[i];
        }
    }
    bool check_ifprime(int n){
        bool isprime=true;
        for(int i=2;i<n;i++){
            if(n%i==0){ 
                isprime=false;
                break;
            }
        }
        return isprime;
    }
    int sumofprime(){
        int sum=0;
        for(int i=0;i<10;i++){
            if(check_ifprime(arr[i])){
                sum+=arr[i]; 
            }
        
        }
        return sum; 
    } 
};
int main(){
    A num;
    num.read_array();
    cout<<"sum is "<<num.sumofprime();
    return 0;
}