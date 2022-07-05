#include <bits/stdc++.h>
using namespace std;

struct Node
{
public:
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Case 1:
void printSubTreeNodes(Node *root, int k)
{
    if (root == NULL)
    {
        return;
    }

    if (k == 0)
    {
        cout << root->data << " ";
        return;
    }

    if (k > 0)
    {
        printSubTreeNodes(root->left, k - 1);
        printSubTreeNodes(root->right, k - 1);
    }
}

// Case 2 :
int printNodesAtK(Node *root, Node *target, int k)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root == target)
    {
        printSubTreeNodes(root, k);
        return 0;
    }

    int dl = printNodesAtK(root, target, k);
    if (dl != -1)
    {
        if (dl + 1 == k)
        {
            cout << root->data << " ";
        }
        else
        {
            printSubTreeNodes(root->right, k - dl - 2);
        }
        return 1 + dl;
    }

    int dr = printNodesAtK(root->right, target, k);
    if (dr != -1)
    {
        if (dr + 1 == k)
        {
            cout << root->data << " ";
        }
        else
        {
            printSubTreeNodes(root->left, k - dr - 2);
        }
        return 1 + dr;
    }

    return -1;
}
int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << printNodesAtK(root, root->left, 2);
    return 0;
}