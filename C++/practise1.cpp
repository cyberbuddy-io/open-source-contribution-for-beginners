#include<iostream>
#include<string>
using namespace std;

class student{
    public:
    string bacha;
    int roll_no;
    void display(string a,int b){
        bacha=a;
        roll_no=b;
        cout<<"The name of student is:-> "<<bacha<<endl<<"And his/her roll number is:-> "<<roll_no<<endl;
    }
};
int main(){
student s;
s.display("Sukhmeet Singh",469);
}