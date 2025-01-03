#include <bits/stdc++.h>

using namespace std;

struct MyStack
{
    int *arr, cap, top;

    MyStack(int c)
    {
        cap = c;
        arr = new int[cap];
        top = -1;
    }

    void push(int x)
    {
        if (top == cap - 1)
        {
            cout << "stack overflow" << endl;
            return;
        }

        top++;
        arr[top] = x;
    }

    int pop()
    {
        if (top == -1)
        {
            return INT_MIN;
        }

        int res = arr[top];
        top--;
        return res;
    }

    int peek()
    {
        return arr[top];
    }

    int size()
    {
        return (top + 1);
    }

    bool isEmpty()
    {
        return (top == -1);
    }
};

int main()
{
    MyStack s(5);

    s.push(1);
    s.push(2);
    s.push(3);

    cout << s.pop() << endl;
    cout << s.size() << endl;
    cout << s.peek() << endl;
    cout << s.isEmpty() << endl;

    return 0;
}