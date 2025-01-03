#include <iostream>

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

void nth_end(Node *head, int pos)
{
    int len = 1;

    for (Node *curr = 0; curr != NULL; curr = curr->next)
        len++;

    if (len < pos)
        return;
    Node *curr = head;

    for (int i = 1; i < (len - pos + 1); i++)
        curr = curr->next;

    cout << curr->data << endl;

    /*Efficient solution*/

    // if (head == NULL)
    //     return;

    // Node *first = head;

    // for (int i = 0; i < pos; i++)
    // {
    //     if (first == NULL)
    //         return;
    //     first = first->next;
    // }

    // Node *second = head;

    // while (first != NULL)
    // {
    //     second = second->next;
    //     first = first->next;
    // }
    // cout << second->data << endl;
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
    Node *temp1 = new Node(15);
    Node *temp2 = new Node(20);
    Node *temp3 = new Node(25);

    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;

    cout << "List: " << endl;
    print(head);

    nth_end(head, 2);

    return 0;
}