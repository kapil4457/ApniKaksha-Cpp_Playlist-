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

void inorder(node *root)
{

    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

void insert(node *&root, int val)
{

    if (root->left == NULL && root->val > val)
    {
        node *temp = new node(val);
        root->left = temp;
        return;
    }
    if (root->right == NULL && root->val < val)
    {
        node *temp = new node(val);
        root->right = temp;
        return;
    }
    if (root->val > val)
    {
        insert(root->left, val);
    }
    else if (root->val < val)
    {
        insert(root->right, val);
    }
}
node *bstFromPreorder(vector<int> &preorder)
{

    node *root = new node(preorder[0]);

    for (int i = 1; i < preorder.size(); i++)
    {
        insert(root, preorder[i]);
    }
    return root;
}

int main()
{

    node *root = new node(5);
    insert(root, 1);
    insert(root, 3);
    inorder(root);

    return 0;
}