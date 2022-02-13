#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void traversing(struct node *ptr)
{
    while(ptr!=NULL)
    {
        cout<<"element: "<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

struct node * insert_at_index(struct node *head, int data, int index)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node *p=head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
int main()
{
    struct node *head;   //stores the address of variable type node
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
    head=(struct node *)malloc(sizeof(struct node)); //allocates the memory size of newnode structure
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));
    fifth=(struct node *)malloc(sizeof(struct node));
    head->data=7;
    head->next=second;
    second->data=8;
    second->next=third;
    third->data=9;
    third->next=fourth;
    fourth->data=10;
    fourth->next=fifth;
    fifth->data=11;
    fifth->next=NULL;
    cout<<"without insertion: "<<endl;
    traversing(head);
    head=insert_at_index(head,80,3);
    cout<<"with insertion: "<<endl;
    traversing(head);
    return 0;
}