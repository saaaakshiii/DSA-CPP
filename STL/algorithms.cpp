#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);

    // Binary search

    cout << "Fimding 6: " << binary_search(v.begin(), v.end(), 6) << endl;

    cout << "Lower bound: " << lower_bound(v.begin(), v.end(), 5) - v.begin() << endl;
    cout << "Upper bound: " << upper_bound(v.begin(), v.end(), 5) - v.begin() << endl;

    string s = "abcd";

    reverse(s.begin(), s.end());
    cout << s << endl;

    rotate(v.begin(), v.begin() + 2, v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    sort(v.begin(), v.end());
    cout << endl;

    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}