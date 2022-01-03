#include<iostream>
#include<math.h>
using namespace std;

class calc{
private:
    int first, second;
public:
    calc(int f, int s) { first=f;
        second=s;
    }
void add() {cout << first + second<<endl; }
void sub() { cout<< first - second<<endl; }
void mul() { cout<< first * second<<endl; }
void div() { cout<< first / second<<endl; }
void exp() { cout<< pow(first ,second)<<endl; }
void rem() { cout<< first % second<<endl; }
};
int main(){
    int opt,f,s;
    while(true){
        cout << "<-------------------------------     Press Ctrl+C to exit Program     ------------------------->" << endl;
        cout << "enter first number : ";
        cin >> f;
        cout << "!!!enter the operation !!!\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Power\n6.Remainder\n7.Clear Screen\n8.Exit Program" << endl;
        cin >> opt;
        if(opt==8){
            system("cls");
            return 0;
        }
        cout << "enter second number: ";
        cin >> s;
        calc cal(f, s);
        switch(opt){
            case 1:{
                cal.add();
                break;
        }
        case 2:{
            cal.sub();
            break;
        }
        case 3:{
            cal.mul();
            break;
        }
        case 4:{
            cal.div();
            break;
        }
        case 5:{
            cal.exp();
            break;
        }
        case 6:{
            cal.rem();
            break;
        }
        case 7:{
            system("cls");
                   break;
        }
        default:{
            cout << "invalid choice !!!" << endl;
            break;
        }
    }
    }
    return 0;
}