#include <bits/stdc++.h>

using namespace std;

struct Node
{
    Node *left, *right;
    int data;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

void vTraversal(Node *root)
{
    map<int, vector<int>> mp;
    queue<pair<Node *, int>> q;
    q.push({root, 0});

    while (!q.empty())
    {
        auto p = q.front();
        Node *curr = p.first;
        int hd = p.second;

        mp[hd].push_back(curr->data);
        q.pop();

        if (curr->left)
            q.push({curr->left, hd - 1});
        if (curr->right)
            q.push({curr->right, hd + 1});
    }

    for (auto x : mp) //for iterating over the map
    {
        for (int y : x.second) //for iterating over the vector
            cout << y << " ";
        cout << endl;
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(15);
    root->left->left = new Node(35);
    root->left->left->left = new Node(40);
    root->left->right = new Node(20);
    root->left->right->right = new Node(75);
    root->left->right->right->right = new Node(80);
    root->right = new Node(25);

    vTraversal(root);

    return 0;
}