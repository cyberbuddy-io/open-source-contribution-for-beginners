#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insertAtTail(node*&head,int val)
{
  
    node *n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node *p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=n;
}

bool detectCycle(node*head)
{
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(fast=slow)
        {
            return true;
        }
    }
    return false;
}

void makeCycle(node*&head,int position)
{
    node*temp=head;
    node*startNode;
    int i=1;
    while(temp->next!=NULL)
    {
        if(i==position)
        {
            startNode=temp;
        }
        temp=temp->next;
        i++;
    }
    temp->next=startNode;
}

void display(node*head)
{
    node *p=head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

int main()
{
    node*head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);
    cout<<endl;
    makeCycle(head,3);
    // display(head);
    cout<<detectCycle(head);
    return 0;
}