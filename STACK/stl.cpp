#include <bits/stdc++.h>

using namespace std;

//Container adapter as it is built using other containers and acts as an interface. By default implemented using dequeue DS in c++ STL;

int main()
{
    stack<int> s;

    s.push(5);
    s.push(4);
    s.push(3);

    // cout << s.size() << endl;
    // cout << s.top() << endl;

    // s.pop();

    // cout << s.top() << endl;

    while (s.empty() == false)
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}