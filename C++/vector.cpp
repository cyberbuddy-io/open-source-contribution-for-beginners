# include <iostream>
# include <vector>
using namespace std;

template <class T>
void display(vector<T> &v){
    
    cout<<"Displaying vector:"<<endl;
    for(int  i = 0; i < v.size(); i++)
    { 
        cout<<v[i]<<endl;
    }
    
    // vector<int> :: iterator it;
    
    // for ( it=v.begin(); it!=v.end(); it++)
    // {
    //     cout<<*it<<endl;
    // }
}
int main(){
    int size,element;
    
    vector <int> vec1;
    vector<int>:: iterator iter;
    
    cout<<"enter size of the vector: "<<endl;
    cin>>size;
    cout<<"enter elements:"<<endl;
    
    for (int  i = 0; i < size; i++)
    {
        cin>>element;
        vec1.push_back(element);    
    }
    //insert method
    iter=vec1.begin();
    vec1.insert(iter+1,3,10);
    display(vec1);
    
    vector <char> vec2(5);
    vec2.push_back('1');
    vec2.push_back('4');
    vec2.push_back('9');
    vec2.push_back('8');
    vec2.push_back('7');
    display(vec2);
    vec2.pop_back();
    display(vec2);

    vector <char> vec3(vec2);
    display(vec3);
    
    vector <float> vec4(4,7);
    display(vec4);  
    
return 0;
}