#include <bits/stdc++.h>

using namespace std;

struct Node
{
    char data;
    Node *next;

    Node(char x)
    {
        data = x;
        next = NULL;
    }
};

Node *reverseIT(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;

    while (curr != NULL)
    {
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool isPalindrome(Node *head)
{
    // Naive

    // stack<char> st;

    // for (Node *curr = head; curr != NULL; curr = curr->next)
    // {
    //     st.push(curr->data);
    // }

    // for (Node *curr = head; curr != NULL; curr = curr->next)
    // {
    //     if (st.top() != curr->data)
    //         return false;

    //     st.pop();
    // }

    // return true;

    // Efficient

    if (head == NULL)
        return true;

    Node *slow = head, *fast = head;

    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node *rev = reverseIT(slow->next);

    Node *curr = head;

    while (rev != NULL)
    {
        if (rev->data != curr->data)
            return false;

        rev = rev->next;
        curr = curr->next;
    }
    return true;
}

void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data;
        head = head->next;
    }
    cout << endl;
}
int main()
{
    Node *head = new Node('A');
    head->next = new Node('B');
    head->next->next = new Node('B');
    head->next->next->next = new Node('C');

    cout << "The string is: " << endl;
    printList(head);

    cout << "Is the string palindrome? " << isPalindrome(head) << endl;

    return 0;
}