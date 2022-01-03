#include <iostream>
using namespace std;
class A{
    public:
    int a[5];
    void read()
    {
        cout << "enter elements into the array: \n";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
}
void logic(){
     for (int i = 1; i < 5; i++){
         if(a[0]<a[i]){
             a[0]=a[i];
         }
       
        }
        cout<<"greatest "<<a[0];
}};

int main()
{
    A a;
    a.read();
    a.logic();
    return 0;
}