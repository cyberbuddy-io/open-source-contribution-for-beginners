// Stack --> add or remove only at one end LIFO 
// operATION --> 1)push(x) 2)pop() 3)top() 4)empty()
#include <iostream>
using namespace std;
#define n 100
class stack
{
    int* arr;
    int top;
    public:
    stack()
    {
        arr=new int [n];
        top=-1;
    }

    void push(int x)
    {
        if(top==n-1)
        {
            cout<<"stack overflow";
            return;
        }
        top++;
        arr[top]=x;
    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"No element to delete"<<endl;
            return;
        }
        top--;
    }

    int Top()
    {
        if(top==-1)
        {
            cout<<"No element in Stack"<<endl;
            return -1;
        }
        return arr[top];
    }

    bool empty()
    {
        return top==-1;
    }

};
int main()
{
    stack st;
    st.push(8);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    
    cout<<st.empty()<<endl;
    
    return 0;
}