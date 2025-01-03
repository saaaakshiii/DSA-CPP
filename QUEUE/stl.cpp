#include <bits/stdc++.h>

using namespace std;

int main()
{
    //O(1) operations
    //Container adapter like stack
    
    queue<int> q;

    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    // cout << q.front() << " " << q.back() << endl;

    // q.pop();

    // cout << q.front() << " " << q.back() << endl;

    cout << q.size() << endl;

    while (!q.empty())
    {
        cout << q.front() << " " << q.back() << endl;
        q.pop();
    }

    return 0;
}