// Search in a sorted and rotated array

#include <iostream>

using namespace std;

int search(int arr[], int n, int x)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[low] <= arr[mid])
        {
            if (x >= arr[low] && x < arr[mid])
            {
                high = mid - 1;
            }

            else
                low = mid + 1;
        }

        else
        {
            if (x > arr[mid] && x <= arr[high])
            {
                low = mid + 1;
            }

            else
                high = mid - 1;
        }
    }

    return -1;
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

    int x;
    cout << "Enter element to be searched: " << endl;
    cin >> x;

    cout << "Element is present at: " << search(arr, n, x) << " index" << endl;

    return 0;
}