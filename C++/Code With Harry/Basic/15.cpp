#include<iostream>
using namespace std;

typedef struct student
{
    /* data */
    int section;
    char name;
    float salary;
}st;


int main(){
    st harry;
    st rohit;
    rohit.section = 10;
    rohit.name = 'r';
    rohit.salary = 1004;
    cout<<rohit.salary;

    
    return 0;
}