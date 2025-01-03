#include <iostream>

using namespace std;

int max_diff(int arr[], int n)
{
    // Naive solution

    // int res = arr[1] - arr[0];

    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         res = max(res, arr[j] - arr[i]);
    //     }
    // }

    // return res;

    // Efficient solution

    int res = arr[1] - arr[0], min_val = arr[0];

    for (int i = 1; i < n; i++)
    {
        res = max(res, (arr[i] - min_val));
        min_val = min(min_val, arr[i]);
    }

    return res;
}

int main()
{
    int n;
    cout << "Enter data: " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The max diff is: " << max_diff(arr, n);

    return 0;
}