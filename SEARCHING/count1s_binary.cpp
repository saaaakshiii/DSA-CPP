// Count the number of 1s in a sorted binary array

#include <iostream>

using namespace std;

int countOnes(int arr[], int n)
{
    int low = 0, high = n - 1;

    while (high >= low)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] < 1)
            low = mid + 1;

        else
        {
            if (arr[mid] != arr[mid - 1] || mid == 0)
                return (n - mid);

            else
                high = mid - 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    cout << "Enter size: " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter elements (binary): " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Occ of 1: " << countOnes(arr, n) << endl;

    return 0;
}