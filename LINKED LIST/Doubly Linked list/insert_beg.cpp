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

Node *insert_beg(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;

    if (head != NULL)
        head->prev = temp;
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
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);

    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;

    cout << "List is: " << endl;
    print(head);

    head = insert_beg(head, 5);
    cout << "After inserting: " << endl;

    print(head);

    return 0;
}