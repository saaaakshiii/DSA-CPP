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

    cout << "After deletion: " << endl;

    head = del_head(head);

    print(head);

    return 0;
}