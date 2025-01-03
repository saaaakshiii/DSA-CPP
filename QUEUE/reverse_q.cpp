#include <bits/stdc++.h>
#include <queue>
using namespace std;

void Print(queue<int> &Queue)
{
    while (!Queue.empty())
    {
        cout << Queue.front() << " ";
        Queue.pop();
    }
}

void reverseQueue(queue<int> &Queue)
{
    // iterative

    // stack<int> Stack;
    // while (!Queue.empty())
    // {
    //     Stack.push(Queue.front());
    //     Queue.pop();
    // }
    // while (!Stack.empty())
    // {
    //     Queue.push(Stack.top());
    //     Stack.pop();
    // }

    // recursive

    if (Queue.empty())
        return;

    int x = Queue.front();
    Queue.pop();
    reverseQueue(Queue);
    Queue.push(x);
}

int main()
{
    queue<int> q;
    q.push(12);
    q.push(5);
    q.push(15);
    q.push(20);

    reverseQueue(q);
    Print(q);
}
