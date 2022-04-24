//********** 3 ************//

#include <iostream>
using namespace std;

int glo = 30;     //Global Variable

void sum(){
    cout<<glo<<endl;  //from global variable as there is no glo in Local variable
}

void boolian(){          //another function
    bool rohit = true;   //true = 1; false = 0
    cout<<rohit<<endl;
}

int main(){
    int glo = 9;   //Local Variable
    glo = 78;
    sum();       //30 (Global Variable)
    cout<<glo<<endl;   //78

    boolian();    //true = 1; false = 0
    cout<<::glo;  // :: - to declare global variable in main function

    return 0;
}