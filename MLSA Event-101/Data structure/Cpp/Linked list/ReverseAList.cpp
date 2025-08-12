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

void insertAtTail(node *&head,int val)
{
    node *n = new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node *p = head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=n;
}

node* reverse(node* &head)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;
    while(currptr!=NULL)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;     //this is our new head
}

void display(node* head)
{
    node *p = head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;

}

int main()
{
    node* head=NULL;
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);
    node *newhead= reverse(head);
    display(newhead);
    return 0;
}