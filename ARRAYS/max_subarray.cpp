#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int maxSub(int arr[], int n)
{
    int res = arr[0];
    int max_end = arr[0];

    for (int i = 0; i < n; i++)
    {
        max_end = max((max_end + arr[i]), arr[i]);

        res = max(res, max_end);
    }
    return res;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << maxSub(arr, n);

    return 0;
}