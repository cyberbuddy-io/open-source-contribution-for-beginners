#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int> v={2,3,4,5,6,7};
    // for(int i=0;i<6;i++){
    //     cout<<v[i]<<" ";
    // }
    // // cout<<endl;
    // vector<int> :: iterator it=v.begin();
    // // cout<<*it<<endl;
    // for(it=v.begin();it!=v.end();it++){
    //     cout<<*it<<" ";
    //
    // vector<pair<int, int>> v = {{1, 2}, {5, 6}, {8, 9}};
    // vector<pair<int, int>>::iterator it;
    // for (it = v.begin(); it != v.end(); it++)
    // {
    //     cout << (it->first) << " " << (it->second) << endl;

    // }
    // for(int value : v){      //here only copies of value will come
    //     value++;
    // }
    // for(int value : v){
    //     cout<<value<<" "<<endl;
    // }
    //to get actual values use c++ refernce operator
    // for(int &value : v){
    //     value++;
    // }
    // for(int value : v){
    //     cout<<value<<" "<<endl;
    // }
    //using shor for loop syntax for vector pair
    // vector<pair<int, int>> v = {{1, 2}, {5, 6}, {8, 9}};
    // for(pair<int,int> &value : v){
    //     cout<<value.first <<" "<<value.second<<endl;
    // }
    //we can use auto keyword insted of whole line of declaring iterator
    // example
    // vector<pair<int, int>> v = {{1, 2}, {5, 6}, {8, 9}};
    // for(auto &value : v){
    //     cout<<value.first <<" "<<value.second<<endl;
    // }

    // cout<<endl;
    vector<int> v={2,3,4,5,6,7};
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    

}