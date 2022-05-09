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

int length(node*&head)
{
    int l=0;
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        l++;
    }
    return l;
}

void intersect(node* &head1, node* &head2,int position)
{
    node* temp1=head1;
    position --;
    while(position--)
    {
        temp1=temp1->next;
    }
    node* temp2=head2;
    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    temp2->next=temp1;
}

int intersection(node*&head1, node*&head2)
{
    int l1=length(head1);
    int l2=length(head2);
    int d=0;      //we want to find difference.
    node* ptr1;
    node* ptr2;
    if(l1>l2)
    {
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    else
    {
        d=l2-l1;
        ptr2=head1;
        ptr1=head2;
    }
    while(d)
    {
        ptr1=ptr1->next;
        if(ptr1==NULL)
        {
            return -1;
        }
        d--;
    }
    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1==ptr2)
        {
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;
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
    node *head1=NULL;
    node *head2=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    insertAtHead(head,7);
    display(head);
    intersect(head1,head2,3);
    display(head1);
    display(head2);
    cout<<intersection(head1,head2);
    return 0;
}