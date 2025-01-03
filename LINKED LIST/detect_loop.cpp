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

bool isLoop(Node *head)
{
    // Node *temp = head;
    // Node *curr = head;

    // while (curr != NULL)
    // {
    //     if (curr->next == NULL)
    //         return false;

    //     if (curr->next == temp)
    //         return true;

    //     Node *curr_next = curr->next;
    //     curr->next = temp;
    //     curr = curr_next;
    // }

    // return false;

    // Efficient code- Hashing

    // unordered_set<Node *> s;

    // for (Node *curr = head; curr != NULL; curr = curr->next)
    // {
    //     if (s.find(curr) != s.end())
    //         return true;

    //     s.insert(curr);
    // }

    // return false;

    // Floyd Cycle

    Node *slow_p = head, *fast_p = head;

    while (fast_p != NULL && fast_p->next != NULL)
    {
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;

        if (slow_p == fast_p)
            return true;
    }

    return false;
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head->next;

    // cout << "List: " << endl;
    // print(head);

    bool ans = isLoop(head);

    if (ans == true)
        cout << "Loop detected" << endl;

    else
        cout << "Not detected" << endl;

    return 0;
}