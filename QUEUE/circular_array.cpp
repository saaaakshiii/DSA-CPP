#include <bits/stdc++.h>

// All operations O(1)

using namespace std;

struct q1
{
    int *arr;
    int front, cap, size;

    q1(int c)
    {
        arr = new int[c];
        cap = c;
        front = size = 0;
    }

    bool isFull()
    {
        return (size == cap);
    }

    bool isEmpty()
    {
        return (size == 0);
    }

    int getFront()
    {
        if (isEmpty())
            return -1;
        return front;
    }

    int getRear()
    {
        if (isEmpty())
            return -1;

        return (front + size - 1) % cap;
    }

    void enqueue(int x)
    {
        if (isFull())
            return;

        int rear = getRear();
        rear = (rear + 1) % cap;
        arr[rear] = x;
        size++;
    }

    void dequeue()
    {
        if (isEmpty())
            return;
        front = (front + 1) % cap;
        size--;
    }

    void display()
    {
        if (isEmpty())
            return;

        for (int i = front; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    q1 q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.display();

    return 0;
}