#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l;

    l.push_back(1);
    l.push_front(2);

    list<int> n(l);


    for (int i : n)
    {
        cout << i << " ";
    }
    cout << endl;

    for (int i : n)
    {
        cout << i << " ";
    }

    l.erase(l.begin());
    cout<<endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout<<endl;

    cout << "Size of list: " << l.size() << endl;

    return 0;
}