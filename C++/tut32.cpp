#include <iostream>
#include <math.h>
using namespace std;

class point{
    int a,b,c,d;
    public:
    point(){
        cout<<"enter the coordinates of first point: "; cin>>a>>b;
        cout<<"enter the coordinates of second point: "; cin>>c>>d;
    }
    void print(void){
        cout<<"your given two points are: "<<"("<<a<<","<<b<<") and "<<"("<<c<<","<<d<<")"<<endl;
    }
    friend void distance(point);

};
void distance(point C){
    float e=(pow(C.c-C.a,2)+pow(C.d-C.b,2));
    float f=(sqrt(e));
    cout<<"the distance two points is: "<<f;
}
int main(){
    point p;
    p.print();
    distance(p);
    return 0;
}