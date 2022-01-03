#include<iostream>
#include<set>
using namespace std;
void print(set<string> &s){
    for(string value : s){
        cout<<value<<endl;
    }
}

int main(){
    set<string> s;
    s.insert("abc");
    s.insert("123");
    s.insert("fjg");
    auto it=s.find("abc");
    print(s);


}