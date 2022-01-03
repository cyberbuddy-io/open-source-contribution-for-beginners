#include <iostream>
using namespace std;

class reverse{
    int a;
    public:
    void rev(void){
        int x;
        cout<<"enter number from which you want to reverse it: "<<endl;
        cin>>x;
        for (int i =x ; i >=0; i--)
        {
            cout<<i<<"\t";
        }
        
    }
};
int main(){
    reverse r;
    r.rev();
    return 0;
}
