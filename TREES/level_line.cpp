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

void printLine(Node *root)
{
    // Method 1

    // if (root == NULL)
    //     return;

    // queue<Node *> q;
    // q.push(root);
    // q.push(NULL);

    // while (q.size() > 1)
    // {
    //     Node *curr = q.front();
    //     q.pop();

    //     if (curr == NULL)
    //     {
    //         cout << "\n";
    //         q.push(NULL);
    //         continue;
    //     }
    //     cout << curr->data << " ";

    //     if (curr->left != NULL)
    //         q.push(curr->left);
    //     if (curr->right != NULL)
    //         q.push(curr->right);
    // }

    // Method 2

    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int count = q.size();

        for (int i = 0; i < count; i++)
        {
            Node *curr = q.front();
            q.pop();
            cout << curr->data << " ";
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
        cout << endl;
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);

    printLine(root);

    return 0;
}