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

Node *insert_end(Node *head, int x)
{
    Node *temp = new Node(x);

    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }

    else
    {
        // Insert temp after head
        temp->next = head->next;
        head->next = temp;

        // swapping
        int t = temp->data;
        temp->data = head->data;
        head->data = t;
        return temp;
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
    Node *temp2 = new Node(40);

    head->next = temp1;
    temp1->next = temp2;
    temp2->next = head;

    cout << "List: " << endl;
    print(head);

    cout << "After inserting: " << endl;
    head = insert_end(head, 5);

    print(head);

    return 0;
}