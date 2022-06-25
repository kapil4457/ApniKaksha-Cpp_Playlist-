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
    int lHeight = height(root->left);
    int rHeight = height(root->right);

    return max(lHeight, rHeight) + 1;
}

//                 1
//       2                   3
//   4         5        6            7

int diameter(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    int maximum = 0;

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
                q.push(node->left);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
            int temp = q.size();
            maximum = max(maximum, temp) - 1;
        }
    }
    return maximum;
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
    root->left->left->left = new Node(8);
    root->left->left->right = new Node(8);
    root->left->right->left = new Node(8);
    root->left->right->right = new Node(8);
    root->right->left->left = new Node(8);
    root->right->left->right = new Node(8);
    root->right->right->left = new Node(8);
    root->right->right->right = new Node(8);

    // cout << height(root);
    cout << diameter(root);
    return 0;
}