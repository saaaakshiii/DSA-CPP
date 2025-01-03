#include <bits/stdc++.h>

using namespace std;

// Memory efficient representation of doubly linked list.
// A memory-efficient version of Doubly Linked List can be created using only one space for the address field with every node. This memory efficient Doubly Linked List is called XOR Linked List or Memory Efficient Linked List as the list uses bitwise XOR operation to save space for one address.
// In the XOR linked list instead of storing actual memory addresses every node stores the XOR of addresses of previous and next nodes.

class Node
{
public:
    int data;
    struct Node *npx = 0;

    Node(int val)
    {
        this->data = val;
    }
};

void insert(Node *&head, Node *&curr, int x)
{
    Node *newNode = new Node(x);

    if (head == NULL)
    {
        head = newNode;
        curr = newNode;
    }
    else
    {
        curr->npx = (Node *)((uintptr_t)curr->npx ^ (uintptr_t)newNode);
        newNode->npx = curr;
        curr = newNode;
    }
    return;
}

void print(Node *head)
{
    Node *temp = head;
    Node *prev = NULL;
    while (temp)
    {
        cout << temp->data << " ";
        Node *current = temp;
        temp = (Node *)((uintptr_t)prev ^ (uintptr_t)temp->npx);
        prev = current;
    }
    return;
}

int main()
{
    Node *head = NULL, *curr = NULL;

    insert(head, curr, 1);
    insert(head, curr, 2);
    insert(head, curr, 3);
    insert(head, curr, 4);
    insert(head, curr, 5);

    print(head);
    return 0;
}