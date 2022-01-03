#include<iostream>
#include<vector>
using namespace std;
void printvec(vector<int> v){
    cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;

    }
}

void main(){
    vector<int> v;
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    for (int i=0;i<n;i++){
        int x;
        cout<<"enter value to add in the vector: ";
        cin>>x;
        printvec(v);
        v.push_back(x);
        printvec(v);
        // v.pop_back();
        // printvec(v);
    }
    // for(int i=n-1;i>=0;i--){
    //     cout<<v[i]<<endl;
    // }
    // printvec(v);
    // vector<int > v2=v;
    // v2.push_back(13);
    // printvec(v2);
}