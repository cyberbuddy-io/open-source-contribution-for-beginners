#include <iostream>
#include <vector>

using namespace std;
template <class t>
void display(vector<t> &v)
{
    cout << "displaying this vector!!!" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " << endl;
        // cout<<v.at(i)<<endl;
    }
}
int main()
{
    // int size=5,element;
    // vector<int> vec1;
    // cout<<"enter the size of vector: "<<endl;
    // cin>>size;
    // for(int i=0;i<4;i++){
    //     int element;
    //     cout<<"enter an element to add vector: ";
    //     cin>> element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back();
    // display(vec1);
    // vector<int>::iterator iter =vec1.begin();
    // vec1.insert(iter,500,566);
    // display(vec1);
    // vector<char> vec2(4);
    // vec2.push_back('5');
    // vector<char> vec3(vec2);
    vector<int> vec4(4, 3);
    display(vec4);

    return 0;
}