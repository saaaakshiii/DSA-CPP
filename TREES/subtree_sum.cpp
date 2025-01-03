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
int countSubTreesUtil(Node *root, int &count, int x)
{
    if (!root)
        return 0;

    int lsum = countSubTreesUtil(root->left, count, x), rsum = countSubTreesUtil(root->right, count, x);

    int sum = lsum + rsum + root->data;

    if (sum == x)
        count++;

    return sum;
}
int countSubtTrees(Node *root, int x)
{
    if (root == NULL)
        return 0;

    int count = 0;
    int ls = countSubTreesUtil(root->left, count, x);
    int rs = countSubTreesUtil(root->right, count, x);

    if ((ls + rs + root->data) == x)
        count++;

    return count;
}

int main()
{
    Node *root = new Node(5);
    root->left = new Node(-10);
    root->right = new Node(3);
    root->left->left = new Node(9);
    root->left->right = new Node(8);
    root->right->left = new Node(-4);
    root->right->right = new Node(7);

    int x = 7;
    cout << "The number of subtrees having sum as " << x << " is: " << countSubtTrees(root, x);

    return 0;
}