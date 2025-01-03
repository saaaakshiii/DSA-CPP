#include <bits/stdc++.h>

using namespace std;

// elements to be inserted must be either smaller thatn or greater than the existing elements

struct MyDS
{

    deque<int> dq;

    void insertMin(int x)
    {

        dq.push_front(x);
    }

    void insertMax(int x)
    {

        dq.push_back(x);
    }

    int getMin()
    {

        return dq.front();
    }

    int getMax()
    {

        return dq.back();
    }

    int extractMin()
    {
        int x = dq.front();

        dq.pop_front();

        return x;
    }

    int extractMax()
    {
        int x = dq.back();

        dq.pop_back();

        return x;
    }

    int size() { return dq.size(); }
};

int main()
{
    struct MyDS ds;

    ds.insertMin(10);
    ds.insertMax(15);
    ds.insertMin(5);

    int x = ds.extractMin();
    cout << x << endl;

    x = ds.extractMax();
    cout << x << endl;

    ds.insertMin(8);
    cout << ds.size() << endl;

    return 0;
}