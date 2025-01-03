#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int subarray(int arr[], int n, int l, int r)
{
    // int getsum[n];
    // getsum[0] = arr[0];

    // for (int i = 1; i < n; i++)
    // {
    //     getsum[i] = arr[i] + getsum[i - 1];
    // }

    // if (l == 0)
    //     return getsum[r];
    // else if (l != 0)
    //     return getsum[r] - getsum[l - 1];

    // weighted sum

    int sum = 0;
    for (int i = l; i <= r; i++)
    {
        sum += (i - l + 1) * arr[i];
    }
    return sum;
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

    int querry;
    cin >> querry;

    int l, r;

    while (querry > 0)
    {
        cout << "Enter startinn and end: " << endl;
        cin >> l >> r;
        cout << "Sum from " << l << " to " << r << " is " << subarray(arr, n, l, r) << endl;
        querry--;
    }

    return 0;
}