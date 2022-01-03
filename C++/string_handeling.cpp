#include<iostream>
#include<string.h>
using namespace std;

class str{
    private:
    char a[20];
    char b[20];
    public:
    void dis(){
        cout<<"enter first copy : "<<endl;
        cin>>a;
        // cout<<"enter second copy : "<<endl;
        // cin>>b;
        // strcpy(a,b);
        strcpy(b,a);
        cout<<b;
    }
};
int main(void){
    str s;
    s.dis();
    return 0;
}