#include <iostream>
using namespace std;

int glo=5;//this is a global variable....
void sum(){
cout<<glo;
}
int main(){
    int glo=6;//this is a local variable
    cout<<glo;
    sum();
    return 0;

}