// Here operating with files in c++ using member functions.
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
    ofstream out;
    out.open("sample.txt");
    out << "Hello my name is selmon boi\n";
    out << "Hello my name is sharuk ka londa boi\n";
    out << "Hello my name is Chuchu lawa cake boi\n";
    out.close();

    ifstream in;
    string st1;
    string st2;
    in.open("sample.txt");
    // in>>st1;
    //  cout<<st1<<endl;
    while (in.eof() == 0) // eof is end of file function,...Which ensures that the file is completly read
    {
        getline(in, st1);
        cout << st1 << endl;
    }

    in.close();

    return 0;
}