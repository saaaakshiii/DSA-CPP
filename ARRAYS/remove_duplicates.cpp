#include <iostream>

using namespace std;

int duplicate(int arr[], int n)
{
    // Naive

    // int temp[n];
    // temp[0] = arr[0];
    // int res = 1;

    // for (int i = 1; i < n; i++)
    // {
    //     if (temp[res - 1] != arr[i])
    //     {
    //         temp[res] = arr[i];
    //         res++;
    //     }
    // }

    // for (int i = 0; i < res; i++)
    // {
    //     arr[i] = temp[i];
    // }
    // return res;

    // Efficient

    int res = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[res - 1] != arr[i])
        {
            arr[res] = arr[i];
            res++;
        }
    }

    return res;
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

    int ans = duplicate(arr, n);

    for (int i = 0; i < ans; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}