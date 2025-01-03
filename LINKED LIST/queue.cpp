#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *next;
};

class queue1
{
    node *front, *rear;

public:
    queue1()
    {
        front = rear = NULL;
    }

    void insert();
    void delete_q();
    void display();
};

void queue1::insert()
{
    node *new_node;
    char c;

    do
    {
        new_node = new node();

        cout << "Enter Data: " << endl;
        cin >> new_node->data;

        new_node->next = NULL;

        if (front == NULL)
        {
            front = new_node;
        }

        else
        {
            rear->next = new_node;
        }

        rear = new_node;

        cout << "Want to inseert some more data? " << endl;
        cin >> c;
    } while (c == 'Y' || c == 'y');
}

void queue1::delete_q()
{
    if (front == NULL)
    {
        cout << "Queue is empty" << endl;
    }

    else
    {
        node *temp = front;

        if (front == rear)
            front = rear = NULL;

        else
            front = front->next;

        cout << "Deleted element is: " << temp->data<<endl;
        delete temp;
    }
}

void queue1::display()
{
    if (front == NULL)
        cout << "Empty queue" << endl;

    else
    {
        for (node *t = front; t != NULL; t = t->next)
        {
            cout << t->data << " ";
        }
        cout<<endl;
    }
}
int main()
{
    queue1 q;
    int choice;
    char c;

    do
    {
        cout << "Enter Choice: " << endl
             << "1. Insert" << endl
             << "2. Delete" << endl
             << "3. Display" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            q.insert();
            break;
        }

        case 2:
        {
            q.delete_q();
            break;
        }

        case 3:
        {
            q.display();
            break;
        }
        default:
            break;
        }

        cout << "You want to continue? " << endl;
        cin >> c;
    } while (c == 'Y' || c == 'y');

    return 0;
}