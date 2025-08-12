#include<fstream>
#include<iostream>
using namespace std;
int main()
{

    fstream obj;
    obj.open("d:\\alpha.txt",ios::in);
    //obj.seekg(5,ios::beg);
    char x;
    while(1)
    {
        x=obj.get();
        if(x==EOF)
        {
            break;
        }
        cout<<x<<" loc is "<<obj.tellg()<<endl;
    }
}
