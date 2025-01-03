#include <bits/stdc++.h>

using namespace std;

void nextGreater(int arr[], int n)
{
    // Naive method

    // for (int i = 0; i < n; i++)
    // {
    //     int j;

    //     for (j = i + 1; j < n; j++)
    //     {
    //         if (arr[j] > arr[i])
    //         {
    //             cout << arr[j] << " ";
    //             break;
    //         }
    //     }

    //     if (j == n)
    //         cout << -1 << " ";
    // }

    // Efficient Solution

    stack<int> s;

    s.push(arr[n - 1]);
    cout<<"-1 ";

    for (int i = n - 2; i >= 0; i--)
    {
        while (s.empty() == false && s.top() <= arr[i])
            s.pop();

        int ng = (s.empty()) ? (-1 ): (s.top());
        cout << ng << " ";
        s.push(arr[i]);
    }
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

    nextGreater(arr, n);

    return 0;
}