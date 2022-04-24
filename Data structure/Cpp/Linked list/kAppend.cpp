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

int length(node* head)
{
    int l=0;
    node *temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        l++;
    }
    return l;
}

node* kAppend(node*&head,int k)
{
    node *newhead;
    node *newtail;
    node *tail=head;   //as we use pointer tail for traversing.
    int l=length(head);
    int i=1;
    k=k%l;
    while(tail->next!=NULL)
    {
        if(i==l-k)
        {
            newtail=tail;
        }
        if(i==l-k+1)
        {
            newhead=tail;
        }
        tail=tail->next;
        i++;
    }
    newtail->next=NULL;
    tail->next=head;
    return newhead;
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
    node* newhead=kAppend(head,3);
    display(newhead);
    return 0;
}