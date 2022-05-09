#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
            return 1;
        }        
    }
        return 0;  
}

int main(){
    int arr[23] = {1,3,2,45,3,5,4,5,70,6,77,6,7,69,8,90,700,19,9,99,5,9,-22};
    cout << "Entre the key you want to search in array "<< endl;
    int key;
    cin >> key;
    bool found = search(arr,23,key);
    if (found)
    {
        cout << "Key is found";
    }
    else{
        cout << "Key is not found";
    }
    
    return 0;
}