#include <bits/stdc++.h>
using namespace std;

int prev1 = INT_MIN;

struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

// bool isBST(Node *root, int min, int max)
// {
//     // Method 1
//      if (root == NULL)
//          return true;

//     return (root->key > min && root->key < max &&
//             isBST(root->left, min, root->key) && isBST(root->right, root->key, max));
// }

bool isBST(Node *root)
{
    if (root == NULL)
        return true;

    if (isBST(root->left) == false)
        return false;

    if (root->key <= prev1)
        return false;

    prev1 = root->key; //prev must be set to inorder predecessor
    return isBST(root->right);
}

int main()
{

    Node *root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);

    // if (isBST(root, INT_MIN, INT_MAX))
    //     cout << "Is BST";
    // else
    //     cout << "Not a BST";

    cout << isBST(root);

    return 0;
}