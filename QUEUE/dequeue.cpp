#include <iostream>
#include <bits/stdc++.h>
#define max 5

using namespace std;

class dequeue
{
    int a[max], f, r;

public:
    dequeue()
    {
        f = r = -1;
    }

    void insert_r();
    void delete_f();
    void insert_f();
    void delete_r();
    void display();
};

void dequeue::insert_r()
{
    int num;
    cout << "Enter data to be inserted from rear: " << endl;
    cin >> num;

    if (f == (r + 1) % max)
        cout << "Dequeue is full" << endl;

    else
    {
        if (r == -1)
        {
            f = r = 0;
            a[r] = num;
        }

        else
        {
            r = (r + 1) % max;
            a[r] = num;
        }
    }
}
int main()
{

    return 0;
}