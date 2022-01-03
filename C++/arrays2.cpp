#include<iostream>
using namespace std;

int main(){
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int *p[3][3];
    int j = 0;
    for (int i = 0; i < 3;i++){
        for (j = 0; j < 3;j++){
            p[i][j] = &a[i][j];}
    }
    for (int i = 0; i < 3;i++){
        for (j = 0; j < 3;j++){
            cout<<*p[i][j]<<"-->" << unsigned(p[i][j]) <<"      ";}
    endl(cout);
    }
    return 0;
}