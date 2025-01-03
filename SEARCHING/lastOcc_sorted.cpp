#include <iostream>

using namespace std;

int lastOcc(int arr[], int n, int h, int l, int x)
{
    // Recursive

    // if (h < l)
    //     return -1;

    // int mid = l + (h - l) / 2;

    // if (arr[mid] > x)
    //     return lastOcc(arr, n, mid - 1, l, x);

    // if (arr[mid] < x)
    //     return lastOcc(arr, n, h, mid + 1, x);

    // else
    // {
    //     if (arr[mid + 1] != arr[mid] || mid == n - 1)
    //         return mid;

    //     else
    //         return lastOcc(arr, n, h, mid + 1, x);
    // }

    while (h >= l)
    {
        int mid = l + (h - l) / 2;

        if (arr[mid] < x)
            l = mid + 1;

        if (arr[mid] > x)
            h = mid - 1;

        else
        {
            if (arr[mid] != arr[mid + 1] || mid == n - 1)
                return mid;

            else
                l = mid + 1;
        }
    }
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
    cout << "Enter the element you want last occurence of: " << endl;
    cin >> x;

    cout << "Last occ of " << x << " is at " << lastOcc(arr, n, n - 1, 0, x) << " index" << endl;

    return 0;
}