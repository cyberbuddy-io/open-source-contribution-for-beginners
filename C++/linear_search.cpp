#include<iostream>
using namespace std;

class linear{
private:
int n;
int counter = 0;
int a[];
public:
void getdata(){
    cout<<"enter size of array: "<<endl;cin>>n;
    a[n];
    int x;
    cout<<"enter elements to add into array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>x;
        a[i]=x;
    }
}
void search(){
    cout<<"enter element you want to search: "<<endl;
    int y;
    int loc=-1;
    cin>>y;
    for(int j=0;j<n;j++){
        if(a[j]==y){
            cout<<"found item "<<a[j]<<" at "<<j<<endl;
            loc++;
            break;
        }
        if(a[j]!=y){
            cout<<"not found!!"<<endl;
            loc++;
            break;
        }
        // if(loc==n&&a[j]!=y){
        //     cout<<"item not found!!"<<endl;
        //     break;
        // }
        
    }
}
};
int main(){
    linear l;
    l.getdata();
    l.search();
}