#include <iostream>

using namespace std;

int findOdd(int arr[], int n)
{
    // Naive sol

    int res = arr[0];

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count % 2 != 0)
            return arr[i];
    }

    // Effecient app

    // int res = arr[0];

    // for (int i = 1; i < n; i++)
    // {
    //     res = res ^ arr[i];
    // }
    // return res;
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

    int ans = findOdd(arr, n);
    cout << ans;

    return 0;
}