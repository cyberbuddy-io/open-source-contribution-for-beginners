//********** 11 ************//

#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Tell me your age = "<<endl; 
    cin>>age;  

    // if (age>18)
    // {
    //     cout<<"You can vote"<<endl;
    // }
    // else if (age==18)
    // {
    //     cout<<"You are 18 year old"<<endl;
    // }
    // else if (age<0)
    // {
    //     cout<<"You are not yet born"<<endl;
    // }
    
    // else
    // {
    //     cout<<"You cannot vote"<<endl;
    // }

// ************* Switch Case statement ************ //
    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 20:
        cout<<"You are 20"<<endl;
        break;
    case 30:
        cout<<"You are 30"<<endl;
        break;
    
    default:
    cout<<"You are too small"<<endl;
        break;
    }

    cout<<"Done";

    return 0;
}
