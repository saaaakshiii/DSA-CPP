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

bool isCsum(Node *root)
{
    if(root==NULL) return true;
    if(root->left==NULL && root->right==NULL) return true;

    int sum=0;

    if(root->left!=NULL) sum+=root->left->data;
    if(root->right!=NULL) sum+=root->right->data;

    return (root->data==sum && isCsum(root->left) && isCsum(root->right));
}

int main()
{
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(12);
    root->right->left = new Node(3);
    root->right->right = new Node(9);

    cout << isCsum(root);

    return 0;
}