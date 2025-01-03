#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    // for (int i : d)
    // {
    //     cout << i << " ";
    // }

    // d.pop_front();
    // cout << endl;
    // for (int i : d)
    // {
    //     cout << i << " ";
    // }

    cout << "Element at 1st index: " << d.at(0) << endl;
    cout << "First elemet: " << d.front() << endl;
    cout << "Last element: " << d.back() << endl;

    cout << "Empty or not? " << d.empty() << endl;

    cout << "Befor erase: " << d.size() << endl;
    d.erase(d.begin());
    cout << "Size after erase: " << d.size() << endl;

    for(int i:d){
        cout<<i<<" ";
    }

    return 0;
}