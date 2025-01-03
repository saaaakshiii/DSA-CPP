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

// Recursive

// Node *insert(Node *root, int x)
// {
//     if (!root)
//         return new Node(x);

//     if (x > root->data)
//         root->right= insert(root->right, x);
//     else
//         root->left= insert(root->left, x);

//     return root;
// }

// Iterative

Node *insert(Node *root, int x)
{
    Node *temp = new Node(x);
    Node *parent = NULL, *curr = root;

    while (curr)
    {
        parent = curr; //to hold the parent pointer because it's required to connect new node
        if (curr->data > x)
            curr = curr->left;
        else if (curr->data < x)
            curr = curr->right;
        else
            return root;
    }

    if (parent == NULL) //1st node
        return temp;

    if (parent->data > x) //for connecting parent to new node
        parent->left = temp;

    else
        parent->right = temp;

    return root;
}

void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->right->left = new Node(12);
    root->right->right = new Node(18);

    cout << "Inorder traversal before insertion: " << endl;
    inorder(root);

    Node *curr = insert(root, 8);
    cout << "\nInorder traversal after inserting 8: " << endl;
    inorder(root);

    return 0;
}