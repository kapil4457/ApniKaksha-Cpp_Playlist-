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
int length(node *head)
{
    int l = 0;
    node *temp = head;
    while (temp != NULL)
    {

        temp = temp->next;
        l++;
    }
    return l;
}

node *mergeTwoSortedLL(node *&head1, node *&head2)
{
    node *head = new node(-1);
    node *ptr = head;
    node *ptr1 = head1;
    node *ptr2 = head2;
    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->data < ptr2->data)
        {
            ptr->next = ptr1;

            ptr1 = ptr1->next;
        }
        else
        {
            ptr->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr = ptr->next;
    }

    while (ptr1 != NULL)
    {
        ptr->next = ptr1;
        ptr = ptr->next;
        ptr1 = ptr1->next;
    }
    while (ptr2 != NULL)
    {
        ptr->next = ptr2;
        ptr = ptr->next;
        ptr2 = ptr2->next;
    }

    return head->next;
}
int main()
{
    node *head1 = NULL;
    node *head2 = NULL;
    insertAtTail(head1, 1);
    insertAtTail(head1, 3);
    insertAtTail(head1, 5);
    insertAtTail(head1, 7);
    insertAtTail(head1, 9);
    insertAtTail(head1, 11);
    insertAtTail(head2, 2);
    insertAtTail(head2, 4);
    insertAtTail(head2, 6);
    insertAtTail(head2, 8);
    insertAtTail(head2, 10);
    insertAtTail(head2, 12);
    printList(head1);
    printList(head2);

    node *ans = mergeTwoSortedLL(head1, head2);
    printList(ans);
    return 0;
}