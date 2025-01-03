// Minimize the max pages allocated
// Only contiguous pages can be allocated

#include <iostream>

using namespace std;

// Answer cannot be less than the max no of pages present in an array
// Binary Search range [max val, sum of all values]

bool isFeasible(int arr[], int n, int k, int ans)
{
    int req = 1, sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > ans)
            return false;

        if (sum + arr[i] > ans)
        {
            req++;
            sum = arr[i];
        }

        else
            sum += arr[i];
    }

    return (req <= k);
}

int minPages(int arr[], int n, int k)
{
    int sum = 0, mx=0;

    if (n < k)
        return -1;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        mx=max(mx, arr[i]);
    }

    int low = mx, high = sum, res = 0;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (isFeasible(arr, n, k, mid))
        {
            res = mid;
            high = mid - 1;
        }

        else
            low = mid + 1;
    }

    return res;
}

int main()
{
    int n;
    cout << "Enter array size: " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the number of students" << endl;
    cin >> k;

    cout << "The minimum number of max pages allocated are: " << minPages(arr, n, k) << endl;
    return 0;
}