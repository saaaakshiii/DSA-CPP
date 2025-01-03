#include <bits/stdc++.h>

using namespace std;

void leftCeil(int arr[])
{
    // Naive

    // cout << "-1 ";
    // int n = 6;

    // for (int i = 1; i < n; i++)
    // {
    //     int diff = INT_MAX;

    //     for (int j = 0; j < i; j++)
    //     {
    //         if (arr[j] >= arr[i])
    //             diff = min(diff, arr[j] - arr[i]);
    //     }

    //     if (diff == INT_MAX)
    //         cout << "-1 ";
    //     else
    //         cout << (arr[i] + diff) << " ";
    // }

    // Efficient

    int n = 6;
    cout << "-1 ";
    set<int> s;
    s.insert(arr[0]);

    for (int i = 1; i < n; i++)
    {
        if (s.lower_bound(arr[i]) != s.end())        // s.lower_bound(arr[i]): This finds the iterator to the smallest element in the set
            cout << *(s.lower_bound(arr[i])) << " "; // s that is greater than or equal to arr[i].
                                                     //*(s.lower_bound(arr[i])) is a C++ expression that retrieves the value of an element in the set s that is pointed to by the iterator returned by s.lower_bound(arr[i]). *is used to dereference the iterator.
        else
            cout << "-1 ";
        s.insert(arr[i]);
    }
}

int main()
{
    int arr[] = {2, 8, 30, 15, 25, 12};
    leftCeil(arr);

    return 0;
}