#include<iostream>
#include<map>
#include<string>
using namespace std;
 void print(map<int,string> &m){
      cout<<m.size()<<endl;
      for(auto &value:m){
        cout<<value.first<< " "<<value.second<<endl;
    }
 }
int main(){
    map<int, string> m;
    m[1]="abc";
    m[5]="cdc";
    m[3]="acd";
    m.insert({4,"afg"});
    // map<int,string>::iterator it;
    // for(it=m.begin();it!=m.end();it++){
    //     cout<<(*it).first<<" "<<(*it) .second<<endl;
    // }
    // m[6];
    // m.erase(3);
    // m.clear();  
    print(m);
   
}