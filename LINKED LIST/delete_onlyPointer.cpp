// Head pointer will not be given. The node to be deleted will never be the last node.
// Trick question: Just copy the data of next node to current node and delete next node

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

void deleteNode(Node *ptr)
{
    Node *temp = ptr->next;
    ptr->data = temp->data;
    ptr->next = temp->next;
    delete (temp);
}

void print(Node *head)
{
    Node *t = head;
    while (head != NULL)
    {
        cout << t->data << " ";
        t = t->next;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head->next;

    cout << "List: " << endl;
    print(head);

    cout << "After deleting node with data 30: " << endl;
    deleteNode(head);
    print(head);

    return 0;
}