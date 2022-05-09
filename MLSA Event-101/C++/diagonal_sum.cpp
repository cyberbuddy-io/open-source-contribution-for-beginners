#include <iostream>
using namespace std;
int main(){
    int i=3,j=3;
    int sum=0;
    int arr1[3][3]={{4,5,6},{7,8,9},{1,2,3}};
    int arr2[3][3]={{4,5,6},{7,8,9},{1,2,3}};
    if(i==j){
        for(int k=0;k<3;k++){
            sum+=arr1[k][k]+arr2[k][k];
        }
        cout<<sum;
    }

    return 0;
}