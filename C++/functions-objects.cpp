#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main(){
    //function objects: function wrapped in a class so that it is available as an object
    int arr[]={1,2,38,142,16,56};
    sort(arr,arr+7,greater<int>());
    for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";}
    return 0;
}