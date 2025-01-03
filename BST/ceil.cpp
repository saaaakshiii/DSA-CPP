#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *left, *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

int ceil(Node *root, int x)
{
    if (root == NULL)
        return -1;

    if (root->data == x)
        return root->data;

    if (root->data < x)
        return ceil(root->right, x);

    int ceilValue = ceil(root->left, x);
    return (ceilValue >= x) ? ceilValue : root->data;
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->right->left = new Node(12);
    root->right->right = new Node(18);

    cout << ceil(root, 20);

    return 0;
}
