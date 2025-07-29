#include <iostream>
using namespace std;

int binary_search(int arr[],int n,int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
}
int main(){
    int n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    cout<<"enter a sorted array"<<endl;
    int arr[n];
    cin>>arr[0];
    for(int i=1;i<n;i++){
        cin>>arr[i];
        if (arr[i]<arr[i-1]){
            cout<<"Enter an elemnt so that the list remains sorted"<<endl;
            i = i -1;
        }
    }
    cout<<"enter the key";
    int key;
    cin>>key;
    cout<<binary_search(arr,n,key);
    return 0;
}