#include <bits/stdc++.h>
using namespace std;

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

Node *prev1 = NULL;

void printlist(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->key << " ";
        curr = curr->right;
    }
    cout << endl;
}

Node *BTToDLL(Node *root)
{
    if (root == NULL)
        return root;
    Node *head = BTToDLL(root->left);
    if (prev1 == NULL)
    {
        head = root;
    }
    else
    {
        root->left = prev1;
        prev1->right = root;
    }
    prev1 = root;
    BTToDLL(root->right);
    return head;
}

int main()
{

    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);
    root->right->left = new Node(30);
    root->right->right = new Node(35);

    Node *head = BTToDLL(root);
    printlist(head);
}