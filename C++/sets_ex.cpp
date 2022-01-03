#include<iostream>
#include<set>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
    multiset<long,long> bags;
    for(int i=0;i<n;++i){
        long long cndy_Ct;
        cin>>cndy_Ct;
        bags.insert(cndy_Ct); 
    } 
    long long total_candies=0;
    for(int i=0;i<k;++i){
        auto last_it=(--bags.end());
        long long cndy_ct=*last_it;
        total_candies=+cndy_ct;
        bags.erase(last_it);
        bags.insert(cndy_ct/2);
    }
    cout<<total_candies<<endl;
    }
}