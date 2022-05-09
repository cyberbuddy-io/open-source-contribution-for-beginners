#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string ,int> marksmap;
    marksmap["harry"]=98;
    marksmap["prashant"]=97;

    map<string ,int>::iterator itr;
    for(itr=marksmap.begin();itr!=marksmap.end();itr++){
        cout<<(*itr).first<<" "<<(*itr).second<<"\n";
    }

    return 0;
}