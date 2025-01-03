#include <bits/stdc++.h>
using namespace std;

// Structure of a node of linked list
struct Node
{
    int val;
    Node *next;
    Node *arbit;

    // Constructor
    Node(int x)
    {
        this->val = x;
        this->next = NULL;
        this->arbit = NULL;
    }
};

void printList(Node *head)
{
    cout << head->val << "("
         << head->arbit->val << ")";
    head = head->next;
    while (head != NULL)
    {
        cout << " -> " << head->val << "("
             << head->arbit->val << ")";
        head = head->next;
    }
    cout << endl;
}

Node *cloneLinkedList(Node *head)
{
    // Naive method- theta(n) time and space

    // unordered_map<Node *, Node *> m;

    // for (Node *curr = head; curr != NULL; curr = curr->next)
    // {
    //     m[curr] = new Node(curr->val);
    // }

    // for (Node *curr = head; curr != NULL; curr = curr->next)
    // {
    //     m[curr]->next = m[curr->next];
    //     m[curr]->arbit = m[curr->arbit];
    // }
    // return m[head];

    // Efficient solution

    Node *curr = head;

    while (curr != NULL)
    {
        // Insert clone nodes alternatively

        Node *next = curr->next;
        curr->next = new Node(curr->val);
        curr->next->next = next;
        curr = next;
    }

    for (Node *curr = head; curr != NULL; curr = curr->next->next)
    {
        // Connect clone nodes with random

        curr->next->arbit = (curr->arbit == NULL) ? NULL : curr->arbit->next;
    }

    // Seperate original and clone nodes

    Node *h2 = head->next;
    Node *clone = h2;

    for (Node *curr = head; curr != NULL; curr = curr->next)
    {
        curr->next = curr->next->next;
        clone->next = clone->next ? clone->next->next : NULL;
        clone = clone->next;
    }

    return h2;
}

int main()
{
    // Creating a linked list with random pointer
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->arbit = head->next->next;
    head->next->arbit = head;
    head->next->next->arbit = head->next->next->next->next;
    head->next->next->next->arbit = head->next->next;
    head->next->next->next->next->arbit = head->next;

    // Print the original list
    cout << "The original linked list:\n";
    printList(head);

    // Function call
    Node *sol = cloneLinkedList(head);

    cout << "The cloned linked list:\n";
    printList(sol);

    return 0;
}