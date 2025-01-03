#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *reversek(Node *head, int k)
{
    // Recursive Solution

    // Node *curr = head, *next = NULL, *prev = NULL;
    // int count = 0;

    // //Time complexity--> O(n^2) space=n/k
    // while (curr != NULL && count < k)
    // {
    //     next = curr->next;
    //     curr->next = prev;
    //     prev = curr;
    //     curr = next;
    //     count++;
    // }

    // if (next != NULL)
    // {
    //     Node *rest_head = reversek(next, k);
    //     head->next = rest_head;
    // }

    // return prev;

    // Iterative

    Node *curr = head, *prevFirst = NULL;

    bool isFirstPass = true;

    while (curr != NULL)
    {
        Node *first = curr, *prev = NULL;
        int count = 0;

        while (curr != NULL && count < k)
        {
            Node *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        if (isFirstPass)
        {
            head = prev;
            isFirstPass = false;
        }

        else
            prevFirst->next = prev;
        prevFirst = first;
    }
    return head;
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout << "List: " << endl;
    print(head);

    head = reversek(head, 2);

    cout << "After reversing: " << endl;

    print(head);

    return 0;
}
