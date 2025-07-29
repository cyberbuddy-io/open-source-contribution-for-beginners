#include<iostream>
using namespace std;

/************ Structure ****************/
typedef struct employee
{   /* data */
    int id;
    char favchar;
    float salary;
} se;       /* use (se) instead of (struct employee) by typedef function*/

/************** Union *******************/
/*int, char, float mein se koi ek hi use kr skte --> (Max= 4 bytes) whereas in Structure total (9 bytes) are used*/
union money   //Better Memmory allocation by union
{
    int rice; //4 bytes
    char car; //1 byte
    float pounds; //4 bytes
};
      

int main()
{
    // se harry;
    // struct employee rohit;
    // harry.id = 1;
    // harry.favchar = 'c';
    // harry.salary = 5000;
    // cout<<harry.id<<endl;
    // cout<<harry.favchar<<endl;
    // cout<<harry.salary<<endl;
   
    union money m1;
    m1.rice = 34;
    // m1.car = 'f';
    cout<<m1.rice;

    /************* Enum *******************/
    enum Meal {breakfast, lunch, dinner};
    cout<<breakfast; //0
    cout<<lunch; //1
    cout<<dinner; //2

    return 0;
}
