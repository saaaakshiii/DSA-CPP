#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *prev, *next;

    Node(int d)
    {
        data = d;
        prev = next = NULL;
    }
};

Node *reverse(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *prev = NULL, *curr = head;

    while (curr != NULL)
    {
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        curr = curr->prev;
    }
    return prev->prev;
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
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);

    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    temp3->prev = temp2;
    temp2->next = temp3;

    cout << "List is: " << endl;
    print(head);

    cout << "after reversing: " << endl;
    head = reverse(head);
    print(head);

    return 0;
}