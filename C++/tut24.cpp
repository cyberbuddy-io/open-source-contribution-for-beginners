#include <iostream>
using namespace std;

class shop{
    int id[100];
    int price[100];
    int counter;
public:
    void initcounter(void){counter=0;}
    void setprice(void);
    void displayprice(void);
};
void shop :: setprice(void){
        cout<<"enter id of your item : "<<counter+1<<endl; cin>>id[counter];
        cout<<"enter the price of your item : "; cin>>price[counter];
        counter++;
}
void shop :: displayprice(void){
    for (int i=0;i<counter;i++)
    cout<<"the price of your item of id "<<id[i]<<" is "<<price[i]<<endl;
}

int main(){
    shop sh;
    sh.initcounter();
    for (int a=0;a<4;a++){
        sh.setprice();
        sh.displayprice();
    }
    return 0;
}
