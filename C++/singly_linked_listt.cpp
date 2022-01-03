#include <iostream>
#include<conio.h>
using namespace std;

class node
{
public:
    int data;
    int key;
    node *next;
    node()
    {
        data = key = 0;
        next = NULL;
    }
    node(int k, int d)
    {
        key = k;
        data = d;
    }
};
class list
{
public:
    node *head;
    list()
    {
        head = NULL;
    }
    list(node *n)
    {
        head = n;
    }
    node *nodeExist(int k)
    {
        node *temp = NULL;
        node *ptr = head;
        while (ptr != NULL)
        {
            if (ptr->key == k)
            {
                temp = ptr;
            }
            ptr = ptr->next;
        }
        return temp;
    }
    void appendNode(node *n)
    {
        if (nodeExist(n->key) != NULL)
        {
            cout << "Node exists with key value " << n->key;
            endl(cout);
        }
        else
        {
            if (head == NULL)
            {
                head = n;
                cout << "Node appended";
            }
            else
            {
                node *ptr = head;
                while (ptr->next != NULL)
                {
                    ptr = ptr->next;
                }
                ptr->next = n;
                cout << "Node appended";
                endl(cout);
            }
        }
    }
    void prependNode(node *n)
    {
        if (nodeExist(n->key) != NULL)
        {
            cout << "Node already exists";
            endl(cout);
        }
        else
        {
            n->next = head;
            head = n;
            cout << "Node prepended";
            endl(cout);
        }
    }
    void insertNodeAfter(int k, node *n)
    {
        if (nodeExist(n->key) != NULL)
        {
            node *ptr = nodeExist(k);
            if (ptr == NULL)
            {
                cout << "No node exist with this key" << endl;
            }
            else
            {
                n->next = ptr->next;
                ptr->next = n;
                cout << "Node inserted";
                endl(cout);
            }
        }
    }
    void updateNode(int k, int d)
    {
        node *ptr = nodeExist(k);
        if (ptr != NULL)
        {
            ptr->data = d;
            cout << "Your data is updated";
            endl(cout);
        }
        else
        {
            cout << "Node doesnt exist with this key";
            endl(cout);
        }
    }
    void deleteNode(int k)
    {

        if (head == NULL)
        {
            cout << "Linked list already empty" << endl;
        }
        else if (head != NULL)
        {
            if (head->key == k)
            {
                head = head->next;
                cout << "Node unlinked with keys value: " << k << endl;
            }
            else
            {
                node *temp = NULL;
                node *prevptr = head;
                node *currentptr = head->next;
                while (currentptr != NULL)
                {
                    if (currentptr->key == k)
                    {
                        temp = currentptr;
                        currentptr = NULL;
                    }
                    else
                    {
                        prevptr = prevptr->next;
                        currentptr = currentptr->next;
                    }
                }
                if (temp != NULL)
                {
                    prevptr->next = temp->next;
                    cout << "Node Unlinked with key value : " << k << endl;
                }
                else
                {
                    cout << "Node doesn't exist with key value : " << k << endl;
                }
            }
        }
    }
    void printList()
    {
        if (head == NULL)
        {
            cout << "No nodes in linked list";
        }
        else
        {
            cout << endl
                 << "Linked list values : ";
            node *temp = head;
            while (temp != NULL)
            {
                cout << "(" << temp->key << "," << temp->data << ") --->";
                temp = temp->next;
            }
        }
    }
};
int main()
{
    list s;
    int option;
    int key1, k1, data1;
    do
    {
        cout << "\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
        cout << "1. appendNode()" << endl;
        cout << "2. prependNode()" << endl;
        cout << "3. insertNodeAfter()" << endl;
        cout << "4. deleteNodeByKey()" << endl;
        cout << "5. updateNodeByKey()" << endl;
        cout << "6. print()" << endl;
        cout << "7. Clear Screen" << endl
             << endl;

        cin >> option;
        node *n1 = new node();
        // Node n1;

        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "Append Node Operation \nEnter key & data of the Node to be Appended" << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            s.appendNode(n1);
            // cout<<n1.key<<" = "<<n1.data<<endl;
            break;

        case 2:
            cout << "Prepend Node Operation \nEnter key & data of the Node to be Prepended" << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            s.prependNode(n1);
            break;

        case 3:
            cout << "Insert Node After Operation \nEnter key of existing Node after which you want to Insert this New node: " << endl;
            cin >> k1;
            cout << "Enter key & data of the New Node first: " << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;

            s.insertNodeAfter(k1, n1);
            break;

        case 4:

            cout << "Delete Node By Key Operation - \nEnter key of the Node to be deleted: " << endl;
            cin >> k1;
            s.deleteNode(k1);

            break;
        case 5:
            cout << "Update Node By Key Operation - \nEnter key & NEW data to be updated" << endl;
            cin >> key1;
            cin >> data1;
            s.updateNode(key1, data1);

            break;
        case 6:
            s.printList();

            break;
        case 7:
            system("cls");
            break;
        default:
            cout << "Enter Proper Option number " << endl;
        }

    } while (option != 0);
    getch();
    return 0;
}