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

//Can be used over a normal Binary Tree also
bool isPair(Node *root, int sum, unordered_set<int> &s)
{
    if (!root)
        return false;

    if (isPair(root->left, sum, s))
        return true;
    if (s.find(sum - root->data) != s.end())
        return true;

    else
        s.insert(root->data);

    return isPair(root->right, sum, s);
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->right->left = new Node(16);
    root->right->right = new Node(40);

    unordered_set<int> s;
    cout << isPair(root, 56, s);

    return 0;
}