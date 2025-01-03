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

Node *del_head(Node *head)
{
    if (head == NULL)
        return NULL;

    if (head->next == head)
    {
        delete head;
        return NULL;
    }

    else
    {
        head->data = head->next->data;
        Node *temp = head->next;
        head->next = head->next->next;
        delete temp;
        return head;
    }
}

Node *del_k(Node *head, int pos)
{
    if (head == NULL)
        return NULL;
    if (pos == 1)
        return del_head(head);

    Node *curr = head;

    for (int i = 0; i < (pos - 2); i++)
    {
        curr = curr->next;
    }

    Node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    return head;
}

void print(Node *head)
{
    if (head == NULL)
        return;

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

    head->next = temp1;
    temp1->next = temp2;
    temp2->next = head;

    cout << "List: " << endl;
    print(head);

    cout << "After deleting 3rd node: " << endl;
    head = del_k(head, 3);

    print(head);

    return 0;
}