// Given an array of N non-negative integers arr[] representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.

#include <iostream>

using namespace std;

int getWater(int arr[], int n)
{
    int res = 0;

    for (int i = 1; i < n - 1; i++)
    {
        int lmax = arr[i]; // tallest bar on left

        for (int j = 0; j < i; j++)
        {
            lmax = max(lmax, arr[j]);
        }

        int rmax = arr[i]; // tallest bar on the right

        for (int j = i + 1; j < n; j++)
        {
            rmax = max(rmax, arr[j]);
        }

        res += (min(lmax, rmax) - arr[i]);
    }

    return res;
}

int main()
{
    int n;
    cout << "Enter size: " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter size of bars: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Maximum rainwater trapped is: " << getWater(arr, n);

    return 0;
}