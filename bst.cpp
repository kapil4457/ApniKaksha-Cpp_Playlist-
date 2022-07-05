#include <bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    node *left;
    node *right;

    node(int data)
    {
        val = data;
        left = NULL;
        right = NULL;
    }
};

node *insert(node *root, int val)
{

    if (root == NULL)
    {
        return new node(val);
    }
    if (val < root->val)
    {
        root->left = insert(root->left, val);
    }

    if (val > root->val)
    {
        root->right = insert(root->right, val);
    }

    return root;
}

int main()
{
    node *root = new node(2);
    insert(root, 1);
    insert(root, 3);
    return 0;
}