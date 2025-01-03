#include <iostream>

using namespace std;

int BS(int arr[], int low, int high, int n, int x)
{
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;

    if (arr[mid] == x)
        return mid;

    else if (arr[mid] > x)
        return (arr, low, mid - 1, n, x);

    else
        return (arr, mid + 1, high, n, x);
}

int main()
{
    int n, x;
    cout << "Enter size of array: " << endl;
    cin >> n;

    cout << "Enter elements: " << endl;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to be searched: " << endl;
    cin >> x;

    cout << "Element is present at index: " << BS(arr, 0, (n - 1), n, x);

    return 0;
}