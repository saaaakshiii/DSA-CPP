#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool equillibrium(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int ls = 0;
    int rs = sum;

    for (int i = 0; i < n; i++)
    {
        ls += arr[i];
        rs -= arr[n - i - 1];
        if (rs == ls)
            return true;
    }

    return false;
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

    cout << equillibrium(arr, n);

    return 0;
}