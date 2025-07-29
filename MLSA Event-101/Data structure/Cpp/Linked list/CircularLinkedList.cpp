#include <iostream>
using namespace std;

class node
{
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insertAtHead(node*&head,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        n->next=n;
        head=n;
        return;
    }
    node* temp;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;

}

void insertAtTail(node*&head,int val)
{
    if(head->next==NULL)
    {
        insertAtHead(head,val);

    }
    node* n = new node(val);
    node* temp;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}

int main()
{
    return 0;
}