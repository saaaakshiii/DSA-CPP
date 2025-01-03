#include <bits/stdc++.h>

using namespace std;

int min_diff(int arr[], int n)
{
    // Naive

    // int res = INT_MAX;

    // for (int i = 1; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         res = min(res, abs(arr[i] - arr[j]));
    //     }
    // }

    // return res;

    //Efficient

    sort(arr, arr+n);

    int res=INT_MAX;

    for (int i = 1; i < n; i++)
    {
        res=min(res, abs(arr[i]- arr[i-1]));
    }
    
    return res;
}

int main()
{
    int arr[3] = {5, 3, 8};

    cout << "The minimum difference is: " << min_diff(arr, 3);

    return 0;
}