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

Node *del_last(Node *head)
{
    if (head == NULL)
        return nullptr;
    if (head->next == NULL)
    {
        delete head;
        return nullptr;
    }

    Node *temp = head;

    while (temp->next!= NULL)
    {
        temp = temp->next;
    }
    temp->prev->next = NULL;
    delete temp->next;
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
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);

    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;

    cout << "List is: " << endl;
    print(head);

    cout << "After deleting: " << endl;
    head = del_last(head);
    print(head);

    return 0;
}