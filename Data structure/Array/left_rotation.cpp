#include <iostream>
using namespace std;
void leftRotatebyOne(int arr[], int n)
{
	int temp = arr[0], i;
	for (i = 0; i <n-1; i++){
        arr[i] = arr[i + 1];

    }
	arr[n-1] = temp;
}

void leftRotate(int arr[], int d, int n)
{
	for (int i = 0; i < d; i++)
		leftRotatebyOne(arr, n);
}

int main(){
    int n,d;
    cout<<"enter the no. of elements you want in array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter no. of shift"<<endl;
    cin>>d;
    leftRotate(arr,d,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}