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

// Building tree form Inorder  and PreOrder travesal array

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

// Building tree form Inorder  and PostOrder travesal array

int search2(int inOrder[], int start, int end, int val)
{
    for (int i = start; i <= end; i++)
    {
        if (inOrder[i] == val)
        {
            return i;
        }
    }
    return -1;
}
Node *buildTree2(int postOrder[], int inOrder[], int start, int end)
{

    if (start > end)
    {
        return NULL;
    }
    static int idx = 4;
    int val = postOrder[idx];
    idx--;
    Node *curr = new Node(val);
    if (start == end)
    {
        return curr;
    }
    int pos = search2(inOrder, start, end, val);
    curr->right = buildTree2(postOrder, inOrder, pos + 1, end);
    curr->left = buildTree2(postOrder, inOrder, start, pos - 1);

    return curr;
}

//-----------Level Order Traversal-----------
// It is performed using a queue

void printLevelOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();
        if (node != NULL)
        {
            cout << node->data << " ";
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
        }
    }
}

// Find the sum of nodes at kth level

int sumAtK(Node *root, int k)
{
    if (root == NULL)
    {
        return -1;
    }

    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    int sum = 0;
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();
        if (node != NULL)
        {
            if (level == k)
            {
                sum += node->data;
            }
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
            q.push(NULL);
            level++;
        }
    }

    return sum;
}

int countNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return countNodes(root->left) + countNodes(root->right) + 1;
}

int SumOfAllNodes(Node *root)
{

    if (root == NULL)
    {
        return 0;
    }

    static int ans = 0;
    ans += root->data;
    SumOfAllNodes(root->left);
    SumOfAllNodes(root->right);

    return ans;
}
int main()
{
    /*---------Tree Traversal-------*/
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    // preOrder(root);
    // inOrder(root);
    // postOrder(root);

    /*---------Tree Creation-------*/

    // 1. From inOrder and preOrder traversal Array
    // int preorder[] = {1, 2, 4, 3, 5};
    // int inorder[] = {4, 2, 1, 5, 3};
    // Node *root = buildTree(preorder, inorder, 0, 4);
    // inOrder(root);

    // 2. From inOrder and postOrder traversal Array
    // int inorder[] = {4, 2, 1, 5, 3};
    // int postorder[] = {4, 2, 1, 5, 3};
    // Node *root = buildTree2(postorder, inorder, 0, 4);
    // inOrder(root);

    /*--------Level Order Traversal----------*/
    // printLevelOrder(root);

    /*-------Sum of nodes a t Kth level---------*/
    // cout << sumAtK(root, 2) << endl;

    /* -------No. of nodes in binary tree------   */
    cout << countNodes(root) << endl;

    /*------Sum of all nodes in a binary tree--------*/
    cout << SumOfAllNodes(root) << endl;
    return 0;
}