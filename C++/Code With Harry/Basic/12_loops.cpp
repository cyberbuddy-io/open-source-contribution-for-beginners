//********** 12 ************//

#include<iostream>
using namespace std;

int main()
{
    /*There are 3 types of loops :
         1. For Loop
         2. While Loop
         3. do-While Loop
    */

    //******** For Loop ********* //

    // for (int i = 0; i < 40; i++)
    // {
    //     cout<<i<<endl;
    // }
    //******** Infinite For Loop *********//
    // for (int i = 0; 5 < 10; i++)
    // {
    //     cout<<i<<endl;
    // }

    //******** While Loop ********//

    // int i=1;
    // while (i<41)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

    //******** Infinite While Loop **********//
    // int i=1;
    // while (true)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

    //********** do-While loop ***********//

    // int i=1;
    // do
    // {
    //     cout<<i<<endl;
    //     i++;
    // } while (i<=10);

    //********** Table of 6 ************//
    int num;
    cout<<"Enter Number"<<endl;
    cin>>num;
    int i=1;
    do
    {
        cout<< num << " * " << i << " = " << num*i <<endl;
        i++;
    } while (i<11);
     
      
    return 0;
}
