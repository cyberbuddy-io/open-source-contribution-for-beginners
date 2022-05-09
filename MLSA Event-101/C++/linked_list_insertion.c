#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *Next;
};
void print_data(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d \n", ptr->data);
        ptr = ptr->Next;
    }
    printf("\n");
}

struct Node *insertionAtFirst(struct Node *ptr, int element)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    p->Next = ptr;
    p->data = element;
    return p;
}
void insertionInBetween(struct Node *ptr, int element, int index)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));

    for (int i = 0; i < index - 1; i++)
    {
        ptr = ptr->Next;
    }

    p->Next = ptr->Next;
    ptr->Next = p;
    p->data = element;
}

void insertionAtEnd(struct Node *ptr, int element)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    while (ptr->Next != NULL)
    {
        ptr = ptr->Next;
    }
    ptr->Next = p;
    p->Next = NULL;
    p->data = element;
}
void insertionAfterNode(struct Node *ptr, int element)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));

    p->Next = ptr->Next;
    ptr->Next = p;
    p->data = element;
}

int main()
{
    struct Node *first, *second, *third, *fourth;
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    first->Next = second;

    second->Next = third;

    third->Next = fourth;

    fourth->Next = NULL;

    first->data = 7;
    second->data = 9;
    third->data = 5;
    fourth->data = 4;

    print_data(first);

    // first=insertionAtFirst(first,10);
    // insertionInBetween(first,90,2);
    // insertionAtEnd(first,80);
     insertionAfterNode(second, 85);
    print_data(first);

    return 0;
}