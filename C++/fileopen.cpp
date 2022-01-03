#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // ofstream out;
    // out.open("sample.txt");
    // out<<"this is me\n";
    // out<<"this is also me.";
    // out.close();

    ifstream in;
    in.open("sample.txt");
    string st,st2;
    while(in.eof()==0){
        getline(in,st);
        cout<<st;
    }
    // in>>st;
    return 0;
}