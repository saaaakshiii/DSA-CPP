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

int countNodes(Node *root)
{
    // Naive-for any binary tree

    // if (root == NULL)
    //     return 0;

    // else
    //     return 1 + countNodes(root->left) + countNodes(root->right);

    // efficient

    int lh = 0, rh = 0;

    Node *curr = root;
    while (curr != NULL)
    {
        lh++;
        curr = curr->left;
    }

    curr = root;
    while (curr != NULL)
    {
        rh++;
        curr = curr->right;
    }
    if (lh == rh)
    {
        return pow(2, lh) - 1;
    }

    else
        return 1 + countNodes(root->left) + countNodes(root->right);
}

int main()
{
    Node *root = new Node(5);
    root->left = new Node(10);
    root->left->left = new Node(4);
    root->left->right = new Node(6);
    root->right = new Node(3);

    cout << "The number of nodes are: " << countNodes(root);

    return 0;
}