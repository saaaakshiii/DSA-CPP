// Count the total number of occurences in a sorted array

#include <iostream>

using namespace std;

int firstOcc(int arr[], int n, int x)
{
    int high = n - 1, low = 0;

    while (high >= low)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] < x)
            low = mid + 1;

        if (arr[mid] > x)
            high = mid - 1;

        else
        {
            if (arr[mid - 1] != arr[mid] || mid == 0)
                return mid;

            else
                high = mid - 1;
        }
    }
    return -1;
}

int lastOcc(int arr[], int n, int x)
{
    int high = n - 1, low = 0;

    while (high >= low)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] < x)
            low = mid + 1;
        if (arr[mid] > x)
            high = mid - 1;

        else
        {
            if (arr[mid + 1] != arr[mid] || mid == n - 1)
                return mid;

            else
                low = mid + 1;
        }
    }

    return -1;
}

int countOcc(int arr[], int n, int x)
{
    int first = firstOcc(arr, n, x);

    if (first == -1)
        return 0;

    return ((lastOcc(arr, n, x) - first) + 1);
}

int main()
{
    int n;
    cout << "Enter size: " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x;
    cout << "Enter element: " << endl;
    cin >> x;

    cout << "The number of occ of " << x << " are: " << countOcc(arr, n, x) << endl;

    return 0;
}