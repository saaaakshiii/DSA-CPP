#include <bits/stdc++.h>

using namespace std;

struct Node
{
    Node *left, *right;
    int data;

    Node(int x)
    {
        left = right = NULL;
        data = x;
    }
};

// Naive-O(n^2)

// int height(Node *root)
// {
//     if (!root)
//         return 0;

//     return 1 + max(height(root->left), height(root->right));
// }

int diametre(Node *root)
{
    // Naive

    // if (!root)
    //     return 0;

    // int d1 = 1 + height(root->left) + height(root->right);
    // int d2 = diametre(root->left);
    // int d3 = diametre(root->right);

    // return max(d1, max(d2, d3));

    int res = 0;

    if (!root)
        return 0;

    int lh = diametre(root->left), rh = diametre(root->right);
    res = max(res, lh + rh + 1);
    return 1 + max(lh, rh);
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->left->left = new Node(50);
    root->right->right = new Node(60);
    root->right->right->right = new Node(70);

    cout << "The diametre is: " << diametre(root);

    return 0;
}