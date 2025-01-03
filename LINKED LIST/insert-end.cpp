#include <iostream>
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

Node *insert_end(Node *head, int x)
{
    Node *temp = new Node(x);

    if (head == NULL)
        return temp;

    Node *curr = head;

    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
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
    head->next->next->next = new Node(5);

    cout << "List: " << endl;

    print(head);

    head = insert_end(head, 50);

    cout << "After inserting: " << endl;
    print(head);

    return 0;
}