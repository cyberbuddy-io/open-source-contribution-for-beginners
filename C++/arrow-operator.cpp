#include <iostream>
using namespace std;

class shop
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata(void)
    {
        cout << "code of this item is " << id << endl;
        cout << "price of this item is " << price << endl;
    }
};
int main()
{
    int p,i;
    float q;
    shop *ptr=new shop[3];
    shop *ptrtemp= ptr;
    for( i=0;i<3;i++)
    {
        cout<<"Enter id and price of item "<<i+1<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }
    for (int i = 0; i < 3; i++)
    {
        cout<<"item number is "<<i+1<<endl;
        ptrtemp->getdata();
    }
    
    return 0;
}