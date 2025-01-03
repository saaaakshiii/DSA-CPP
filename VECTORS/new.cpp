#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v(5);

    // cout << v.size() << endl;
    // cout << v.capacity() << endl;

    // v.push_back(6);
    // cout << v.size() << endl;
    // cout << v.capacity() << endl;

    // v.push_back(1);
    // cout << v.size() << endl;
    // cout << v.capacity() << endl;

    // v.push_back(2);
    // cout << v.size() << endl;
    // cout << v.capacity() << endl;

    // v.resize(5);
    // cout << v.size() << endl;
    // cout << v.capacity() << endl;

    // v.resize(14);
    // cout << v.size() << endl;
    // cout << v.capacity() << endl;

    // v.pop_back();
    // v.pop_back();
    // cout << v.size() << endl;
    // cout << v.capacity() << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<v[i]<<" ";
    // }

    // for each

    for (int ele : v)
    {
        cout << ele << " ";
    }
    cout << endl;

    v.insert(v.begin() + 2, 78);

    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    v.erase(v.end() - 1);

    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}