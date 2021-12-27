//********** 10 ************//

#include<iostream>
// #include<string>
using namespace std;

int main()
{
    // string name;
    // int birthday;

    // cout<<"Enter your name -\n";
    // getline(cin, name);
    // cout<<"Enter your bithday -\n";
    // cin>>birthday;
    
    // cout<<"Hello "<<name<<endl;
    // cout<<"Birthday = "<<birthday<<endl;
/**********************/

    int birthday;
    string name;

    cout<<"Enter your bithday -\n";
    cin>>birthday;
    cout<<"Enter your name -\n";
    cin.ignore();  //ignores cin and print getline but not vice versa
    getline(cin, name);
    
    cout<<"Hello "<<name<<endl;
    cout<<"Birthday = "<<birthday<<endl;

    return 0;
}
