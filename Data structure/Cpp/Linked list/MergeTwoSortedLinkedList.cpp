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
void insert_tail(node *&head, int val)
{
    node *n = new node(val); // creating a new node
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = n;
}

void display(node *head)
{
    node *p = head;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout<<endl;
}

node *merge(node *&head1, node *&head2)
{
    node *p1 = head1;
    node *p2 = head2;
    node *dummyNode = new node(-1);
    node *p3 = dummyNode;
    while(p1!=NULL && p2!=NULL)
    {
        if(p1->data<p2->data)
        {
            p3->next=p1;
            p1=p1->next;
        }
        else
        {
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }
    while(p1!=NULL)
    {
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }
    while(p2!=NULL)
    {
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }
    return dummyNode->next;
}

int main()
{
    node* head1=NULL;
    node* head2=NULL;
    int arr1[]={1,4,5,7};
    int arr2[]={2,3,6};
    for(int i=0;i<4;i++)
    {
        insert_tail(head1,arr1[i]);
    }
    for(int i=0;i<3;i++)
    {
        insert_tail(head2,arr2[i]);
    }
    display(head1);
    display(head2);
    node* newhead=merge(head1,head2);
    display(newhead);
    return 0;
}