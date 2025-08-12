#include <iostream>
#include <stack>
#include <math.h>
using namespace std;
int op1,op2;
int postfixEvaluation(string s)
{
    stack<int> st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            st.push(s[i]-'0');   //if we - ascii walue of zero then we'll get integer.
        }
        else
        {
            op1=st.top();
            st.pop();
            op2=st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(op1+op2);
                break;

             case '-':
                st.push(op1-op2);
                break;
            
             case '*':
                st.push(op1*op2);
                break;

             case '/':
                st.push(op1/op2);
                break;
             case '^':
                st.push(pow(op1,op2));
                break;
            }
        }
    }
    return st.top();
}
int  main()
{   
    cout<<postfixEvaluation("46+2/5*7+");

    return 0;
}