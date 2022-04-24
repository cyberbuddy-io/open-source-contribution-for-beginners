#include<iostream>
using namespace std;

int BinnerySearch(int arr[], int n, int key){
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/2;
    while (start <= end){
    if (arr[mid] == key)
    {
        return mid;
    }
    if (key > arr[mid])
    {
        start = mid + 1;
    }else{
        end = mid - 1;
    }
   mid = start + (end - start)/2;
}
    return -1;
}

int main(){

    int evenarr[6] = {23,34,45,56,67,78};
    int oddarr[5] = {34,44,54,64,76};
    int evenindex = BinnerySearch(evenarr,6,34);
    int oddINdex = BinnerySearch(oddarr,5,44);
    cout << "Index of 34 is " << evenindex << endl;
    cout << "Index of 44 is " << oddINdex <<endl;
    return 0;
}