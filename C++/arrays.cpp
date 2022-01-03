#include<iostream>
using namespace std;

int main(){
    int *p[3];//array of pointer
    int a[3] = {4, 3, 2};//integer array
    for (int k = 0; k < 3;k++){
        p[k] = a +k;//storing address of int array in array pointers
    }
    cout << "Address Element " << endl;
    for (int k = 0; k < 3;k++){
        cout << unsigned(p[k]) ;//addresses of array elements
        cout <<"        "<< *p[k] << endl;//values of array elements
    }
    return 0;
}