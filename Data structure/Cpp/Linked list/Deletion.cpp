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

    void deleteATHead(node *&head)
    {
        node* todelete = head;
        head=head->next;
        delete todelete;
    }

    void deletion(node *&head,int val)
    {
        if(head==NULL)
        {
            return;
        }

        if(head->next==NULL)
        {
            deleteATHead(head);
            return;
        }

        node *temp = head;
        while(temp->next->data!=val)
        {
            temp=temp->next;
        }
        node* todelete=temp->next;
        temp->next=temp->next->next;
        delete todelete; 
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
    cout<<endl;
    deletion(head,2);
    // deleteATHead(head);
    display(head);
    return 0;
}