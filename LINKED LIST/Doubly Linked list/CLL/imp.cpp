#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *prev, *next;

    Node(int x)
    {
        data = x;
        prev = next = NULL;
    }
};

void print(Node *head)
{
    Node *p = head;

    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);

    cout << endl;
}

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);

    head->prev = temp3;
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    temp2->next = temp3;
    temp3->prev = temp2;
    temp3->next = head;

    cout << "The list is: " << endl;
    print(head);

    return 0;
}