#include <bits/stdc++.h>
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

// Inset at head of the LL
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

// insert a node at tail
void insertAtTail(node *&head, int val)
{
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

// Deleting a node

void deleteAtHead(node *&head)
{
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    node *n = head;
    temp->next = head->next;
    head = head->next;
    delete n;
}
void deleteNode(node *&head, int pos)
{
    node *temp = head;
    int count = 0;
    // Corner Case : 1
    if (pos == 1)
    {
        deleteAtHead(head);
        return;
    }

    // Corner Case : 2
    if (temp == NULL)
    {
        cout << "List is Empty" << endl;
        return;
    }

    while (count != pos - 1)
    {
        temp = temp->next;

        count++;
    }
    node *n = temp->next;
    temp->next = temp->next->next;
    delete n;
    cout << "Deletion Successfull" << endl;
}

// Printing the linked list
void printList(node *head)
{
    if (head == NULL)
    {
        cout << "List is Empty" << endl;
        return;
    }
    node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}

int main()
{
    node *head1 = NULL;

    insertAtTail(head1, 1);
    insertAtTail(head1, 3);
    insertAtTail(head1, 5);
    insertAtTail(head1, 7);
    insertAtTail(head1, 9);
    insertAtTail(head1, 11);
    printList(head1);
    deleteNode(head1, 5);
    deleteNode(head1, 1);
    printList(head1);

    return 0;
}