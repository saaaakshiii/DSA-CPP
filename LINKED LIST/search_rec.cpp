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

int search(Node *head, int x)
{
    if (head == NULL)
        return -1;
    if (head->data == x)
        return 1;

    else
    {
        int res = search(head->next, x);
        if (res == -1)
            return -1;
        else
            return (res + 1);
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

    int pos = search(head, 30);
    cout << "30 is present at " << pos << " position";

    return 0;
}