//function overloading
#include<iostream>
using namespace std;

int sum(float a, int b){
    cout<<"Using function with 2 arguments"<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"Using function with 3 arguments"<<endl;
    return a+b+c;
}

// Calculate the volume of a cylinder
int volume(double r, int h){
    return(3.14 * r *r *h);
}

// Calculate the volume of a cube
int volume(int a){
    return (a * a * a);
}

// Rectangular box
int volume (int l, int b, int h){
    return (l*b*h);
}

int main(){
    cout<<"The sum of 3 and 6 is "<<endl<<sum(3,6)<<endl;
    cout<<"The sum of 3, 7 and 6 is "<<endl<<sum(3, 7, 6)<<endl;
    cout<<"The volume of rectangular box of 3, 7 and 6 is "<<endl<<volume(3, 7, 6)<<endl;
    cout<<"The volume of cylinder of radius 3 and height 6 is "<<endl<<volume(3, 6)<<endl;
    cout<<"The volume of cube of side 3 is "<<endl<<volume(3)<<endl;
    return 0;
}

