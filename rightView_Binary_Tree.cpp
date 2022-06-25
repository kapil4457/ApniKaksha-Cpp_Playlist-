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

void rightView(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    cout << root->data << " ";

    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();

        if (node != NULL)
        {

            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
        }
        else if (!q.empty())
        {
            cout << (q.back())->data << " ";
            q.push(NULL);
        }
    }
}

void leftView(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    cout << root->data << " ";

    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();

        if (node != NULL)
        {

            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
        }
        else if (!q.empty())
        {
            cout << (q.front())->data << " ";
            q.push(NULL);
        }
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

    rightView(root);
    cout << endl;
    leftView(root);

    return 0;
}