#include <bits/stdc++.h>

using namespace std;

int res = 0;

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

int burnTime(Node *root, int leaf, int &dist)
{
    if (!root)
        return 0;

    if (root->data == leaf)
    {
        dist = 0;
        return 1;
    }

    int ldist = -1, rdist = -1;

    int lh = burnTime(root->left, leaf, ldist);
    int rh = burnTime(root->right, leaf, rdist);

    if (ldist != -1)
    {
        dist = ldist + 1;
        res = max(res, dist + rh);
    }

    else if (rdist != -1)
    {
        dist = rdist + 1;
        res = max(res, dist + lh);
    }

    return max(lh, rh) + 1;
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->left->left->left = new Node(60);
    root->left->left->left->left = new Node(70);
    int dist = -1;
    int leaf = 50;
    burnTime(root, leaf, dist);
    cout << res;

    return 0;
}