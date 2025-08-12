#include<iostream>
using namespace std;
// Note : Binary search works on sorted array only.
// Time Complexity : O(log n)
// Space Complexity : O(1)
// Binary search is a searching algorithm that finds the position of a target value within a sorted array.
int binarysearch(int arr[],int n,int key){ 
        int s=0;
        int e=n;
        while(s<=e){
            int mid=(s+e)/2;
        
            if(arr[mid]==key) {
                return mid;
            }
            else if(arr[mid]>key){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return -1;
}

int main(){

    int n;
    cout<<"Enter the size of array : "; 
    cin>>n;
     
    cout<<"<---- Enter elements of sorted array ----> "<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    int key;
    cout<<"Enter a element : ";
    cin>>key;
    int result = binarysearch(arr,n, key);

    if(result==-1){
        cout<<"Element is not present in array \n ";
    }
    else{
        cout<<"element is at : "<<result+1<<" Position in Array."<<endl;
    }

    return 0;
} 