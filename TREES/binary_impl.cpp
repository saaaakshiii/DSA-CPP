#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    Node *left, *right;
    int data;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

void printPre(Node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    printPre(root->left);
    printPre(root->right);
}

void printIn(Node *root)
{
    if (root == NULL)
        return;

    printIn(root->left);
    cout << root->data << " ";
    printIn(root->right);
}

void printPost(Node *root)
{
    if (root == NULL)
        return;

    printPost(root->left);
    printPost(root->right);
    cout << root->data << " ";
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);

    cout << "Preorder: " << endl;
    printPre(root);
    cout << endl;

    cout << "Inorder: " << endl;
    printIn(root);
    cout << endl;

    cout << "Postorder: " << endl;
    printPost(root);
    cout << endl;

    return 0;
}