#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *next;
};

class stack1
{
    node *top;

public:
    void push();
    void pop();
    void display();

    stack1() { top = NULL; }
};

void stack1::pop()
{
    if (top == NULL)
        cout << "Stack empty" << endl;

    else
    {
        cout << "\nElement delted" << endl
             << top->data << endl;

        node *temp;
        temp = top;
        top = top->next;
        delete temp;
    }
}
void stack1::push()
{
    int data;
    node *new_node;
    new_node = new node();

    if (new_node == NULL)
        cout << "Memory not available" << endl;

    else
    {
        cout << "Enter Data: " << endl;
        cin >> data;

        new_node->data = data;
        new_node->next = top;
        top = new_node;
    }
}

void stack1::display()
{
    if (top == NULL)
        cout << "Stack empty" << endl;

    else
    {
        for (node *t = top; t != NULL; t = t->next)
            cout << t->data << " ";
    }
}
int main()
{
    stack1 s;

    s.push();
    s.push();
    s.push();
    s.display();
    s.pop();
    s.display();

    return 0;
}