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

int search(node *root, int val)
{
    static int found = 0;
    if (root == NULL)
    {
        return found;
    }
    if (root->val == val)
    {
        found = 1;
        return found;
    }
    if (val > root->val)
    {

        search(root->right, val);
    }
    else
    {

        search(root->left, val);
    }

    return found;
}

node *deleteNode(node *root, int key)
{
    if (root)
        if (key < root->val)
            root->left = deleteNode(root->left, key);
        else if (key > root->val)
            root->right = deleteNode(root->right, key);
        else
        {
            if (!root->left && !root->right)
                return NULL;
            if (!root->left || !root->right)
                node *temp = root->left;
            while (temp->right != NULL)
                temp = temp->right;
            root->val = temp->val;
            root->left = deleteNode(root->left, temp->val);
        }
    return root;
}
int main()
{
    node *root = new node(5);
    insert(root, 1);
    insert(root, 3);
    inorder(root);
    cout << endl;
    if (search(root, 1))
    {
        cout << "Present";
    }
    else
    {
        cout << "Absent";
    }

    deleteNode(root, 1);
    inorder(root);

        return 0;
}