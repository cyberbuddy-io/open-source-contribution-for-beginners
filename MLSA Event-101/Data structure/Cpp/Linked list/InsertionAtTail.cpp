#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
    void insert_tail(node *&head,int val)
    {
        node *n = new node(val);  //creating a new node 
        if(head==NULL)
        {
            head = n;
            return;
        }
        node *p = head;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=n;
    }

    void display(node *head)
    {
        node *p = head;
        while(p!=NULL)
        {
            cout<<"element: "<< p->data<<" ";
            p=p->next;
        }
    }
int main()
{
    node *head=NULL;
    insert_tail(head,2);
    insert_tail(head,3);
    insert_tail(head,4);
    display(head);
    return 0;
}