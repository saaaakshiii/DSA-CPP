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

Node *insert_pos(Node *head, int pos, int data)
{
    Node *temp = new Node(data);

    if (pos == 1)
    {
        return temp;
    }

    Node *curr = head;

    for (int i = 1; i < (pos - 1) && curr != NULL; i++)
        curr = curr->next;

    if (curr == NULL)
        return head;

    temp->next = curr->next;
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
    head->next->next->next = new Node(40);

    cout << "List: " << endl;
    print(head);

    head = insert_pos(head, 3, 15);
    cout << "List after inserting: " << endl;
    print(head);

    return 0;
}