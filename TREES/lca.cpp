// The LCA or Lowest Common Ancestor of any two nodes N1 and N2 is defined as the common ancestor of both the nodes which is closest to them. 
// That is the distance of the common ancestor from the nodes N1 and N2 should be least possible.

#include <bits/stdc++.h>

using namespace std;

struct Node
{
    Node *left, *right;
    int data;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

// bool findPath(Node *root, vector<Node *> &p, int n)
// {
//     if (root == NULL)
//         return false;

//     p.push_back(root);

//     if (root->data == n)
//         return true;

//     if (findPath(root->left, p, n) || findPath(root->right, p, n))
//         return true;

//     p.pop_back();
//     return false;
// }

Node *lca(Node *root, int n1, int n2)
{
    // Naive solution

    // vector<Node *> path1, path2;

    // if (findPath(root, path1, n1) == false || findPath(root, path2, n2) == false)
    //     return NULL;

    // for (int i = 0; i < path1.size() - 1 && i < path2.size() - 1; i++)
    // {
    //     if (path1[i + 1] != path2[i + 1])
    //         return path1[i];
    // }

    // return NULL;

    // Efficient Solution

    if (root == NULL)
        return NULL;

    if (root->data == n1 || root->data == n2)
        return root;

    Node *lca1 = lca(root->left, n1, n2);
    Node *lca2 = lca(root->right, n1, n2);

    if (lca1 != NULL && lca2 != NULL)
        return root;

    if (lca1 != NULL)
        return lca1;

    else
        return lca2;
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);

    int n1 = 20, n2 = 50;
    Node *ans = lca(root, n1, n2);
    cout << "LCA is: " << ans->data;

    return 0;
}