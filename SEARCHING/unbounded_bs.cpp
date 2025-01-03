#include <iostream>

using namespace std;

int binarySearch(int arr[], int x, int low, int high)
{
    while (high >= low)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            high = mid - 1;

        if (arr[mid] < x)
            low = mid + 1;
    }
}

int search(int arr[], int x)
{
    // Naive

    // int i = 0;

    // while (true)
    // {
    //     if (arr[i] == x)
    //         return i;
    //     if (arr[i] > x)
    //         return -1;

    //     i++;
    // }

    // Efficient

    if (arr[0] == x)
        return 0;

    int i = 1;

    while (arr[i] < x)
    {
        i *= 2;

        if (arr[i] == x)
            return x;
    }

    return binarySearch(arr, x, (i / 2) + 1, i - 1);
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

    int x;
    cin >> x;

    cout << search(arr, x);

    return 0;
}