#include <iostream>
#include<conio.h>
using namespace std;

class employee{
    int id;
    int salary;
    public:
        void setdata(void){
            salary=50000;
            cout<<"enter the id of employee : "; cin>>id;
        }
        void getdata(void){
            cout<<"the id of this employee is : "<<id<<"\nsalary is : "<<salary<<endl;
        }
};
int main(){
    employee fb[4];
    for (int i=0;i<4;i++){
        fb[i].setdata();
        fb[i].getdata();
    }
    getch();
    return 0;
}
