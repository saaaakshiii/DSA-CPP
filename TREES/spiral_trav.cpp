#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *left, *right;

    Node(int k)
    {
        data = k;
        left = right = NULL;
    }
};

void printSpiral(Node *root)
{
    // Methiod 1

    // if (root == NULL)
    //     return;

    // queue<Node *> q;
    // stack<int> s; //to reverse the elements of a particular level
    // bool rev = false;
    // q.push(root);

    // while (!q.empty())
    // {
    //     int count = q.size();

    //     for (int i = 0; i < count; i++)
    //     {
    //         Node *curr = q.front();
    //         q.pop();

    //         if (rev)
    //             s.push(curr->data);
    //         else
    //             cout << curr->data << " ";

    //         if (curr->left != NULL)
    //             q.push(curr->left);
    //         if (curr->right != NULL)
    //             q.push(curr->right);
    //     }

    //     if (rev)
    //     {
    //         while (!s.empty())
    //         {
    //             cout << s.top() << " ";
    //             s.pop();
    //         }
    //     }
    //     rev = !rev;
    //     cout << endl;
    // }

    // Method 2

    if (root == NULL)
        return; 

    stack<struct Node *> s1; 
    stack<struct Node *> s2; 
    s1.push(root);

    while (!s1.empty() || !s2.empty())
    {
        while (!s1.empty())
        {
            struct Node *temp = s1.top();
            s1.pop();
            cout << temp->data << " ";

            if (temp->left)
                s2.push(temp->left);
            if (temp->right)
                s2.push(temp->right);
        }

        while (!s2.empty())
        {
            struct Node *temp = s2.top();
            s2.pop();
            cout << temp->data << " ";

            if (temp->right)
                s1.push(temp->right);
            if (temp->left)
                s1.push(temp->left);
        }
    }
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    printSpiral(root);
    return 0;
}