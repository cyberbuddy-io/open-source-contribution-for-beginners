#include<iostream>
#include<fstream>
using namespace std;

int main(){ 
    // ofstream hout("sample.txt");
    // string name;
    // cout<<"enter your name: "<<endl;
    // cin>>name;
    // hout<<"My name is : " + name;
    // hout.close();

    ifstream hin("sample.txt");
    string content;
    hin>>content;
    getline(hin,content);
    cout<<"the content of this file is: "<<content<<endl;
    return 0;
}