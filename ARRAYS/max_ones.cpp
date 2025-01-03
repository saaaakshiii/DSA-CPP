#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int maxOnes(int arr[], int n)
{
    int res = 0;
    int ans = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            res++;
        ans = max(ans, res);
    }

    return ans;
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

    int ans = maxOnes(arr, n);
    cout << ans;
    return 0;
}