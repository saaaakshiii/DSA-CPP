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

int max_ele(Node *root)
{
    if (root == NULL)
        return INT_MIN;

    else
        return max(root->data, max(max_ele(root->left), max_ele(root->right)));
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->right = new Node(60);

    cout << max_ele(root);

    return 0;
}