// Serialization is to store the tree in a file so that it can be later restored. The structure of the tree must be maintained. 
// Deserialization is reading the tree back from a file.

#include <bits/stdc++.h>

using namespace std;

const int EMPTY = -1;
int index = 0;
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

void serialize(Node *root, vector<int> &ar)
{
    if (!root)
    {
        ar.push_back(EMPTY);
        return;
    }
    ar.push_back(root->data);
    serialize(root->left, ar);
    serialize(root->right, ar);
}

Node *deserialization(vector<int> &arr)
{
    if (index == arr.size())
        return NULL;

    int val = arr[index];
    index++;

    if (val == EMPTY)
        return NULL;

    Node *root = new Node(val);
    root->left = deserialization(arr);
    root->right = deserialization(arr);
    return root;
}

void inorder(Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);

    vector<int> arr;
    serialize(root, arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    Node *curr = deserialization(arr);
    inorder(curr);

    return 0;
}