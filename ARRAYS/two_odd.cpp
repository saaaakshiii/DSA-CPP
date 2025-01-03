#include <iostream>

using namespace std;

void findOdd(int arr[], int n)
{
    // Naive sol

    // for (int i = 0; i < n; i++)
    // {
    //     int count = 0;

    //     for (int j = 0; j < n; j++)
    //     {
    //         if (arr[i] == arr[j])
    //             count++;
    //     }

    //     if (count % 2 != 0)
    //         cout << arr[i] << " ";
    // }

    // Effecient sol

    int x = arr[0];
    for (int i = 1; i < n; i++)
    {
        x = x ^ arr[i];
    }

    int k = (x & (~(x - 1)));
    int res1 = 0, res2 = 0;

    for (int i = 0; i < n; i++)
    {
        if ((arr[i] & k) != 0)
        {
            res1 = res1 ^ arr[i];
        }
        else if ((arr[i] & k) == 0)
        {
            res2 = res2 ^ arr[i];
        }
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

    findOdd(arr, n);

    return 0;
}