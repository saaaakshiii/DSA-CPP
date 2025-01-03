#include <iostream>

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

bool search(Node *root, int key)
{
    if (!root)
        return false;

    if (root->data == key)
        return true;

    else if (root->data > key)
        return search(root->left, key);

    else
        return search(root->right, key);
}
int main()
{
    Node *root = new Node(15);
    root->left = new Node(5);
    root->right = new Node(20);
    root->left->left = new Node(3);
    root->right->left = new Node(18);
    root->right->left->left = new Node(16);
    root->right->right = new Node(80);

    cout<< search(root, 70);

    
    return 0;
}