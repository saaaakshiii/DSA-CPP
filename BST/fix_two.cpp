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

void inorder(Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}
Node *prevv = NULL, *first = NULL, *second = NULL;

//Function to provide two wrongly placed keys

void fixBST(Node *root)
{
    if (root == NULL)
        return;

    //Modified inorder traversal ans inorder travels prints the data in sorted manner

    fixBST(root->left); // check for the left subtree
    if (prevv != NULL && root->key < prevv->key) //when root data is smaller than the data of peviously visited node 
    {
        if (first == NULL)
            first = prevv; //first wrongly placed key is found
        second = root; //second wrongly placed key
    }
    prevv = root;

    fixBST(root->right); //right subtree
}

int main()
{

    Node *root = new Node(18);
    root->left = new Node(60);
    root->right = new Node(70);
    root->left->left = new Node(4);
    root->right->left = new Node(8);
    root->right->right = new Node(80);

    inorder(root);
    cout << endl;
    fixBST(root);
    swap(first->key, second->key);
    inorder(root);

    return 0;
}