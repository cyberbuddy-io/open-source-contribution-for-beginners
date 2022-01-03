#include<iostream>
#include<fstream>
using namespace std;


int main(){
    string st="hello sukhmeet brother!!";
    string st2;
    ofstream out("sample.txt");
    cout<<st;
    ifstream in("sampleb.txt");
    cin>>st2;
    // getline(in,st2);
    // cout<<st2;
    return 0;
}