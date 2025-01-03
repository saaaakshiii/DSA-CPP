// We are given an array of distinct integers, and our task is to find the closest (positive wise) greater element on left of every element.
// If there is no greater element on left, then we print -1

#include <bits/stdc++.h>

using namespace std;

void printGreater(int arr[], int n)
{
    // Naive

    // for (int i = 0; i < n; i++)
    // {
    //     int j;

    //     for (j = i - 1; j >= 0; j--)
    //     {
    //         if (arr[j] > arr[i])
    //         {
    //             cout << arr[j] << " ";
    //             break;
    //         }
    //     }
    //     if (j == -1)
    //         cout << "-1 ";
    // }

    // Efficient

    stack<int> s;

    s.push(arr[0]);

    for (int i = 0; i < n; i++)
    {
        while (s.empty() == false && s.top() <= arr[i])
            s.pop();

        int pg = (s.empty()) ? -1 : s.top();
        cout << pg << " ";
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

    printGreater(arr, n);

    return 0;
}