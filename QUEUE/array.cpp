#include <bits/stdc++.h>

using namespace std;

struct q1
{
    int size, cap;
    int *arr;

    q1(int c)
    {
        cap = c;
        size = 0;
        arr = new int[cap];
    }

    bool isFull()
    {
        return (size == cap);
    }
    bool isEmpty()
    {
        return (size == 0);
    }
    void enqueue(int x)
    {
        if (isFull())
            return;
        arr[size] = x;
        size++;
    }
    void dequeue()
    {
        if (isEmpty())
            return;

        for (int i = 0; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
    }
    int getFront()
    {
        if (isEmpty())
            return -1;

        else
            return arr[0];
    }
    int getRear()
    {
        if (isEmpty())
            return -1;

        else
            return arr[size - 1];
    }
    int size1()
    {
        return size;
    }

    void display()
    {
        if (isEmpty())
            return;

        else
        {
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }
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
    q.dequeue();
    cout << q.getFront() << endl;
    cout << q.getRear() << endl;
    cout << q.size1() << endl;

    q.display();
    return 0;
}