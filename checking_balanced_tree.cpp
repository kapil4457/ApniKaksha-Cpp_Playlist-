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

int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int ltree = height(root->left);
    int rtree = height(root->right);
    return max(ltree, rtree) + 1;
}

bool isBalancedTree(Node *root)
{

    if (root == NULL)
    {
        return true;
    }
    if (isBalancedTree(root->left) == false)
    {
        return false;
    }

    if (isBalancedTree(root->right) == false)
    {
        return false;
    }

    int llen = height(root->left);
    int rlen = height(root->right);
    if (llen - rlen <= 1 && llen - rlen >= -1)
    {
        return true;
    }
    else
    {
        return false;
    }
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

    cout << isBalancedTree(root);
    return 0;
}