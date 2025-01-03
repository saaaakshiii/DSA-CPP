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

int floor(Node *root, int x)
{
    if (!root)
        return -1;

    else if (root->data == x)
        return root->data;

    else if (root->data > x)
        return floor(root->left, x);

    int floorValue = floor(root->right, x);

    return (floorValue <= x && floorValue != -1) ? floorValue : root->data;
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->right->left = new Node(12);
    root->right->right = new Node(18);

    cout << floor(root, 20) << endl;

    return 0;
}