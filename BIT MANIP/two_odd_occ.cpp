#include <iostream>

using namespace std;

void twoOdd(int arr[], int n)
{
    // Naive

    // for (int i = 0; i < n; i++)
    // {
    //     int count = 0;

    //     for (int j = i+1; j < n; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             count++;
    //         }
    //         if (count % 2 != 0)
    //             cout << arr[i] << " ";
    //     }
    // }

    int x = arr[0];

    for (int i = 1; i < n; i++)
    {
        x = x ^ arr[i];
    }

    int k = (x & (~(x - 1)));

    int res1 = 0, res2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] & k != 0)
            res1 = res1 ^ arr[i];

        else
            res2 = res2 ^ arr[i];
    }

    cout << res1 << " " << res2;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    twoOdd(arr, n);

    return 0;
}