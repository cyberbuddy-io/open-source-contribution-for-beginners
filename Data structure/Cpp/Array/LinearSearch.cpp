#include <iostream>
using namespace std;
int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
     return -1;
}
int main(){
    int n;
    cout<<"enter the number of array you want to insert";
    cin>>n;
    cout<<"enter the indexing values of array : "; 
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    };
    cout<<"enter the key";  
    int key;
    cin>>key;
    cout<<linearsearch(arr,n,key)<<endl;
    return 0;
} 