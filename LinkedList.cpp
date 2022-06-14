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

// ----Reverse a LL----
// 1st way : 3 pointer method(Iterativa way)
node *reverse(node *head)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;

    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }

    return prevptr;
}

// 2nd way : Recursive way
node *reverseRecursive(node *&head)
{

    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *newNode = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newNode;
}
// Replacing a node

// Searching for a node

bool Searching(node *head, int val)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == val)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

// Rev k nodes
node *reversek(node *&head, int k)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;
    int count = 0;
    while (currptr != NULL && count < k)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }

    if (nextptr != NULL)
    {

        head->next = reversek(nextptr, k);
    }
    return prevptr;
}

// Detection and removal of cycle
// Floyd's Algorithm
// Hare and Tortoise Method

void makeCycle(node *&head, int pos)
{
    node *temp = head;
    node *startNode;

    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
        {
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}
bool detectCycle(node *&head)
{
    node *slow = head;
    node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}

void removeCycle(node *&head)
{
    node *slow = head;
    node *fast = head;

    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    fast = head;
    while (slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}
int main()
{

    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtHead(head, 4);
    insertAtHead(head, 5);
    insertAtHead(head, 6);
    // printList(head);
    // cout << Searching(head, 8) << endl;
    // deleteNode(head, 2);
    // printList(head);
    // deleteNode(head, 5);
    printList(head);

    // node *newHead1 = reverse(head);
    // node *newHead2 = reverseRecursive(head);
    // printList(newHead2);

    // int k = 2;
    // node *newHead = reversek(head, k);
    // printList(newHead);

    makeCycle(head, 3);
    cout << detectCycle(head) << endl;
    removeCycle(head);
    cout << detectCycle(head) << endl;
    printList(head);
    return 0;
}