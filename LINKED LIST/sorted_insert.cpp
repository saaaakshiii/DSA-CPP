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

Node *sorted(Node *head, int x)
{
    Node *temp = new Node(x);

    if (head == NULL)
        return temp;

    if (x < head->data)
    {
        temp->next = head;
        return temp;
    }

    Node *curr = head;

    while (curr->next != NULL && curr->next->data < x)
    {
        curr = curr->next;
    }

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
    Node *temp = new Node(15);
    Node *temp2 = new Node(20);

    head->next = temp;
    temp->next = temp2;

    cout << "List: " << endl;
    print(head);

    cout << "After inserting: " << endl;
    head = sorted(head, 25);
    print(head);

    return 0;
}