#include<iostream>
using namespace std;
class LinearSearch{
    private:
    int n;
    int k;
    int counter=0;
    int c=1;
    int arr[];

public:
    LinearSearch(){
    cout << "Enter the size of array ->  ";
    cin >> n;
    arr[n];
    for (int i = 0; i < n;i++){
        cout << "Add the "<<"["<<c<<"]"<<" element of array - >  ";
        cin >>arr [i];
        if(arr[i]=='Q'||arr[i]=='q'){
            break;
        }
        c++;
    }
    }
    void search(){
        cout << "Enter the element which you want to find - >  " ;
        cin >> k;
        for (int i = 0; i <= n;i++){
            if(arr[i]==k){
                cout << "<----------     Element " << arr[i] << " found at position->  " << i + 1 << "     ---------->" << endl;
            }  
            if(arr[i]!=k){
                counter += 1;
            }
            if(counter==n+1){
                    cout << "<----------     Element not found     ----------->" << endl;
            }
            }
        }
};

int main(){
    LinearSearch ls;
    ls.search();
    return 0;
}