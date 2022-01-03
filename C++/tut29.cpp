#include <iostream>
using namespace std;

class complex{
    int a , b;
    public:
    friend class calculate;
    void setnum(int x,int y){
        a=x;
        b=y;
    }
    void print(void){
        cout<<"your number is : "<<a<<" + "<<b<<"i"<<endl;
    }
};
class calculate{
    public:
    int sumofreal(complex o1,complex o2){
        return (o1.a+o2.a);
    }
    int sumofcomp(complex o1,complex o2){
        return (o1.b+o2.b);
    }
    

};
int main(){
    int n,m;
    cout<<"enter first num : "<<endl; cin>>n;
    cout<<"enter second num : "<<endl; cin>>m;
    complex o1,o2;
    o1.setnum(n,m);

    int v,c;
    cout<<"enter first num for second exp : "<<endl; cin>>v;
    cout<<"enter second num for second exp : "<<endl; cin>>c;
    o2.setnum(v,c);
    o1.print();
    o2.print();

    calculate calc;
    int res=calc.sumofreal(o1,o2);
    cout<<"the sum of real part is: "<<res<<endl;
    int resc=calc.sumofcomp(o1,o2);
    cout<<"the sum of complex part is: "<<resc<<"i"<<endl;

    return 0;
}
