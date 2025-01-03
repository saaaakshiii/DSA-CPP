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

Node *del_first(Node *head)
{
    if (head == NULL)
        return NULL;

    else
    {
        Node *temp = head->next;
        delete head;
        return temp;
    }
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

    cout << "List: " << endl;
    print(head);

    cout << "After deletion: " << endl;
    head = del_first(head);
    print(head);

    return 0;
}