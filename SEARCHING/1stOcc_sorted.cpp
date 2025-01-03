// Index of first occurence of an element in a sorted array

#include <iostream>

using namespace std;

int firstOcc(int arr[], int n, int x)
{
    int high = n - 1, low = 0;

    while (high >= low)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] > x)
            high = mid - 1;
        if (arr[mid] < x)
            low = mid + 1;

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

int main()
{
    int n;
    cout << "Enter size of array: " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x;
    cout << "Enter the element to be searched: " << endl;
    cin >> x;

    cout << "Element is present at " << firstOcc(arr, n, x) << " index" << endl;

    return 0;
}