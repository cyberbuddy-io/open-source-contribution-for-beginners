#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node *prev;

    node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void insertAtHead(node*&head,int val)
{
    node *n = new node(val);  //creating a new node so that we can insert that node at head.
    n->next = head;
    if(head!=NULL)
    {
    head->prev = n;
    }
    head = n;
}

void insertAtTail(node*&head,int val)
{
    if(head==NULL)
    {
        insertAtHead(head,val);
        return;
    }
    node *n = new node(val);
    node *p = head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next = n;
    n->prev = p;
}

void display(node*head)
{
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    node *head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    insertAtHead(head,7);
    display(head);
    return 0;
}