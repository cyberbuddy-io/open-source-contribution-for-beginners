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
    node *n=new node(val);
    n->next=head;
    if(head!=NULL)
    {
        n->prev=head;
    }
    head=n;
}

void insertAtTail(node *&head,int val)
{
    node *n=new node(val);
    node *p=head;
    if(head==NULL)
    {
        insertAtHead(head,val);
        return;
    }
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=n;
    n->prev=p;
}

void deleteAtHead(node*&head)
{
    node *todelete=head;
    head=head->next;
    head->prev=NULL;
    delete todelete;
}

void deletion(node*&head,int position)
{
    node*temp=head;
    if(position==1)
    {
        deleteAtHead(head);
    }
    int i=0;
    while(temp!=NULL && i!=position)
    {
        temp=temp->next;
        i++;
    }
    if(temp->next!=NULL)
    {
        temp->next->prev=temp->prev;
    }
    temp->prev->next=temp->next;
    delete temp;
}

void display(node*head)
{
    node* p=head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    insertAtHead(head,7);
    display(head);
    deletion(head,2);
    display(head);
    return 0;
}