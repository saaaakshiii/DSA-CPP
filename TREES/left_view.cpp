#include <bits/stdc++.h>

using namespace std;
int maxLvl = 0;

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

void printLeft(Node *root, int level)
{
    // Recursive

    // if (root == NULL)
    //     return;

    // if (maxLvl < level)
    // {
    //     cout << root->data << " ";
    //     maxLvl = level;
    // }

    // printLeft(root->left, level + 1);
    // printLeft(root->right, level + 1);

    // Iterative

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

            if (i == 0) //Print data only if its the 1st node of that level
                cout << curr->data << " ";

            if (curr->left != NULL)
                q.push(curr->left);

            if (curr->right != NULL)
                q.push(curr->right);
        }
    }
}

void printLeftView(Node *root)
{
    printLeft(root, 1);
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->right = new Node(60);

    printLeftView(root);

    return 0;
}