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

Node *insert_beg(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
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

    cout << "The list is: " << endl;
    print(head);

    cout << "After Inserting: " << endl;

    head = insert_beg(head, 50);
    print(head);

    return 0;
}