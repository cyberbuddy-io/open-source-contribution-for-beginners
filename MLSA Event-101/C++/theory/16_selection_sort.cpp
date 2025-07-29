//Selection Sorting = Find the minimum element in unsorted array & swap it with the element at the begining.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    // for (int i = 0; i < (n-1); i++)
    // {
    //     for (int j = (i+1); j < n; j++)
    //     {
    //         if (arr[j]<arr[i])
    //         {
    //             int temp=arr[j];
    //             arr[j]=arr[i];
    //             arr[i]=temp;
    //         }
            
    //     }
           
    // }

    for (int i = (n-1); i >= 0 ; i--)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

/*
15
5
1
1

22 choc
*/