#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *next; // holds the address of next pointer
};

class LL
{
    node *start;

public:
    LL()
    {
        start = NULL;
    }
    void create();
    void display();
    void deletee();
    void insert();
    void search();
    void count();
};

void LL::create()
{
    node *old_node;
    char c;

    do
    {
        node *new_node = new node();
        cout << "Enter Data: " << endl;
        cin >> new_node->data;

        if (start == NULL)
        {
            start = new_node;
        }

        else
        {
            old_node->next = new_node;
        }

        old_node = new_node;

        cout << "Want to enter some more data? " << endl;
        cin >> c;
    } while (c == 'Y' || c == 'y');
}

void LL::display()
{
    for (node *i = start; i != NULL; i = i->next)
    {
        cout << i->data << " ";
    }
}

void LL::count()
{
    int i = 0;
    node *t = start;

    if (start == NULL)
    {
        cout << "List has no element" << endl;
    }

    else
    {
        do
        {
            i++;
            t - t->next;
        } while (t != NULL);
        cout << "Total elements are: " << i << endl;
    }
}

int main()
{
    LL l;
    l.create();
    // l.display();
    l.count();
    return 0;
}