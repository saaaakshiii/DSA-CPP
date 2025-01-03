#include <bits/stdc++.h>

using namespace std;

struct Node
{
    Node *left, *right;
    int data;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

void vSumR(Node *root, int hd, map<int, int> &m)
{
    if (!root)
        return;

    vSumR(root->left, hd - 1, m);
    m[hd] += root->data; //internally self-balancing BST. Maintains key value pairs in sorted order
    vSumR(root->right, hd + 1, m);
}

void vSum(Node *root)
{
    map<int, int> m;
    vSumR(root, 0, m);

    for (auto sum : m)
        cout << sum.second << endl;
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(15);
    root->left->left = new Node(35);
    root->left->left->left = new Node(40);
    root->left->right = new Node(20);
    root->left->right->right = new Node(75);
    root->left->right->right->right = new Node(80);
    root->right = new Node(25);

    vSum(root);

    return 0;
}