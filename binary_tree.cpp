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

void preOrder(Node *root)
{

    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

// Building tree form Inorder  and PostOrder travesal array

int search(int inOrder[], int start, int end, int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (inOrder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}

Node *buildTree(int preOrder[], int inOrder[], int start, int end)
{
    static int idx = 0;

    if (start > end)
    {
        return NULL;
    }
    int curr = preOrder[idx];
    idx++;
    Node *root = new Node(curr);
    if (start == end)
    {
        return root;
    }
    int pos = search(inOrder, start, end, curr);
    root->left = buildTree(preOrder, inOrder, start, pos - 1);
    root->right = buildTree(preOrder, inOrder, pos + 1, end);
    return root;
}

int main()
{
    /*---------Tree Traversal-------*/
    // struct Node *root = new Node(1);
    // root->left = new Node(2);
    // root->right = new Node(3);
    // root->left->left = new Node(4);
    // root->left->right = new Node(5);
    // root->right->left = new Node(6);
    // root->right->right = new Node(7);
    // preOrder(root);
    // inOrder(root);
    // postOrder(root);

    /*---------Tree Creation-------*/

    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};
    Node *root = buildTree(preorder, inorder, 0, 4);
    inOrder(root);

    return 0;
}