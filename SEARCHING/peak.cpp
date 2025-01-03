// A peak element is an element whose neighbours have value smaller than that of the element

#include <iostream>

using namespace std;

int peak(int arr[], int n)
{
    // Naive

    // if (n == 1)
    //     return 0;

    // if (arr[0] >= arr[1])
    //     return 0;

    // if (arr[n - 1] >= arr[n - 2])
    //     return n - 1;

    // for (int i = 1; i < n - 1; i++)
    // {
    //     if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
    //         return i;
    // }

    // return -1;

    // Efficient solution

    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid]))
        {
            return mid;
        }

        if (mid > 0 && arr[mid - 1] >= arr[mid])
            high = mid - 1;

        else
            low = mid + 1;
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

    cout << "The peak element is present at: " << peak(arr, n) << " index" << endl;

    return 0;
}