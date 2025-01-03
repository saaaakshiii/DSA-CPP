#include <iostream>

using namespace std;

int sum(int *arr, int idx, int n)
{
    if (idx == n - 1)
    {
        return arr[idx];
    }

    return arr[idx] + sum(arr, idx + 1, n);
}

int main()
{
    int arr[5] = {3, 4, 5, 6, 7};
    int ans = sum(arr, 0, 5);

    cout << ans << endl;

    return 0;
}