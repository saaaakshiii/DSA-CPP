// In a Balanced Binary Tree for every node, the difference between heights of left subtree and right subtree should not be more than one.

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

// int height(Node *root)
// {
//     if (root == NULL)
//         return 0;

//     else
//         return max(height(root->left), height(root->right))+1;
// }

int isBalanced(Node *root)
{
    // Naive

    // if(root==NULL) return true;

    // int lh=height(root->left);
    // int rh=height(root->right);

    // return(abs(lh-rh)<=1 && isBalanced(root->left) && isBalanced(root->right));

    // Efficient

    if (root == NULL)
        return 0;

    int lh = isBalanced(root->left);

    if (lh == -1)
        return -1;

    int rh = isBalanced(root->right);
    if (rh == -1)
        return -1;

    if (abs(lh - rh) > 1)
        return -1;

    else
        return max(lh, rh) + 1;
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(30);
    root->right->left = new Node(15);
    root->right->right = new Node(20);

    cout << isBalanced(root);

    return 0;
}