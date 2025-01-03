#include <iostream>

using namespace std;

int tSearch(int arr[], int l, int r, int x)
{
    // Recursive

    if (r >= 1)
    {
        int mid1 = l + (r - 1) / 3;
        int mid2 = r - (r - 1) / 3;

        if (arr[mid1] == x)
            return mid1;

        if (arr[mid2] == x)
            return mid2;

        if (x < arr[mid1])
            return (arr, l, mid1 - 1, x);

        if (x > arr[mid2])
            return (arr, mid2 + 1, r, x);

        else
            return (arr, mid1 + 1, mid2 - 1, x);
    }

    return -1;
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
    cout << "Enter element to be searched: " << endl;
    cin >> x;

    cout << "Element is present at: " << tSearch(arr, 0, n-1, x) << " index" << endl;

    return 0;
}