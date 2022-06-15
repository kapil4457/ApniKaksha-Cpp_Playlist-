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

// insert a node at tail
void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

// Inset at head of the LL
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

// Deleting a node

void deleteNode(node *&head, int val)
{
    node *temp = head;

    // Corner Case : 1
    if (temp->data == val)
    {
        head = head->next;
        delete temp;
        return;
    }

    // Corner Case : 2
    if (temp == NULL)
    {
        cout << "List is Empty" << endl;
        return;
    }

    while (temp->next->data != val)
    {
        temp = temp->next;
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
    while (temp->next != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << endl;
}

// Solution to the Problem
void EvenAfterOdd(node *&head)
{
    node *odd = head;
    node *even = head->next;
    node *evenStart = even;
    while (odd->next != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;

        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenStart;
    if (odd->next != NULL)
    {
        even->next = NULL;
    }
}
int main()
{
    node *head1 = NULL;

    insertAtTail(head1, 1);
    insertAtTail(head1, 2);
    insertAtTail(head1, 3);
    insertAtTail(head1, 4);
    insertAtTail(head1, 5);
    insertAtTail(head1, 6);
    insertAtTail(head1, 7);
    printList(head1);
    EvenAfterOdd(head1);
    printList(head1);

    return 0;
}