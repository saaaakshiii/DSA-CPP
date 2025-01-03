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

void print_mid(Node *head)
{
    if (head == NULL)
        return;

    Node *slow = head, *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << "The middle element is: " << slow->data << endl;
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
    print_mid(head);

    return 0;
}