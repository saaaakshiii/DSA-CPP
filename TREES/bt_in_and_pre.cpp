// We can construct a binary tree only when inorder traversal
// and one more (preorder/ postorder ) traversal is given

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

// O(n^2) Naive
//  int preIndex = 0;
//  Node *cTree(int in[], int pre[], int is, int ie)
//  {
//      if (is > ie)
//          return NULL;
//      Node *root = new Node(pre[preIndex++]);

//     int inIndex;
//     for (int i = is; i <= ie; i++)
//     {
//         if (in[i] == root->key)
//         {
//             inIndex = i;
//             break;
//         }
//     }
//     root->left = cTree(in, pre, is, inIndex - 1);
//     root->right = cTree(in, pre, inIndex + 1, ie);
//     return root;
// }

// Effiicient- O(n)

Node *buildTree(int in[], int pre[], int inStrt,
                int inEnd, unordered_map<int, int> &mp)
{
    static int preIndex = 0;

    if (inStrt > inEnd)
        return NULL;

    /* Pick current node from Preorder traversal using preIndex
    and increment preIndex */
    int curr = pre[preIndex++];
    struct Node *tNode = new Node(curr);

    /* If this node has no children then return */
    if (inStrt == inEnd)
        return tNode;

    /* Else find the index of this node in Inorder traversal */
    int inIndex = mp[curr];

    /* Using index in Inorder traversal, construct left and
    right subtress */
    tNode->left = buildTree(in, pre, inStrt, inIndex - 1, mp);
    tNode->right = buildTree(in, pre, inIndex + 1, inEnd, mp);

    return tNode;
}

// This function mainly creates an unordered_map, then
// calls buildTree()
struct Node *buldTreeWrap(int in[], int pre[], int len)
{
    // Store indexes of all items so that we
    // we can quickly find later
    unordered_map<int, int> mp;
    for (int i = 0; i < len; i++)
        mp[in[i]] = i;

    return buildTree(in, pre, 0, len - 1, mp);
}

int main()
{

    int in[] = {20, 10, 40, 30, 50};
    int pre[] = {10, 20, 30, 40, 50};
    int n = sizeof(in) / sizeof(in[0]);
    Node *root = buldTreeWrap(in, pre, n );
    inorder(root);
}