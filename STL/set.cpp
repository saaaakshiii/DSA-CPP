#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s;

    s.insert(11);
    s.insert(3);
    s.insert(11);
    s.insert(32);
    s.insert(90);
    s.insert(32);
    s.insert(90);
    s.insert(90);
    s.insert(32);
    s.insert(11);
    s.insert(90);

    for (auto i : s)
    {
        cout << i << " "; // elements will be printed in ascending order; every element will be printed only once
    }

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);

    cout << endl;

    for (auto i : s)
    {
        cout << i << " ";
    }

    cout << endl;

    cout << "90 present or not? " << s.count(90) << endl;

    return 0;
}