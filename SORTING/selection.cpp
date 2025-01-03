#include <bits/stdc++.h>

using namespace std;

void selection(int arr[], int n)
{
    int min_idx;

    for (int i = 0; i < n - 1; i++)
    {
        min_idx = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }

        swap(arr[min_idx], arr[i]);
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

    cout << "The sorted array is: " << endl;
    selection(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
