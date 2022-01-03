#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int>::iterator it;
    for(it=lst.begin();it!=lst.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
    list<int> list1;//list of 0 length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(8);
    list1.push_back(9);
    list1.push_back(4);
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(9);
    list1.sort();
    display(list1);

    list<int> list2(3);//empty list of size 7
    list<int>::iterator iter;
    iter=list2.begin();
    *iter=45;
    iter++;
    *iter=13;
    iter++;
    *iter=69;
    iter++;
    display(list2);
    list2.sort();
    list1.merge(list2);
    display(list1);
    list1.reverse();
    display(list1);
    return 0;
}