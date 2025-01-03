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

void preorderIter(Node *root)
{
    // if (root == NULL)
    //     return;

    // stack<Node *> st;
    // st.push(root);

    // while (!st.empty())
    // {
    //     Node *curr = st.top();
    //     cout << curr->data << " ";
    //     st.pop();

    //     if (curr->right)
    //         st.push(curr->right);
    //     if (curr->left)
    //         st.push(curr->left);
    // }

    // Space optimized

    if (!root)
        return;

    stack<Node *> st;
    Node *curr = root;

    while (curr || !st.empty())
    {
        while (curr)
        {
            cout << curr->data << " ";

            if (curr->right)
                st.push(curr->right);
            curr = curr->left;
        }

        if (!st.empty())
        {
            curr = st.top();
            st.pop();
        }
    }
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);

    preorderIter(root);

    return 0;
}