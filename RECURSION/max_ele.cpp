#include <iostream>

using namespace std;

int maximum(int *arr, int idx, int n)
{
    // base case
    if (idx == n - 1)
    {
        // we only have one element left, so this is the max element
        return arr[idx];
    }

    return max(arr[idx], maximum(arr, idx + 1, n));
}

int main()
{
    int arr[5] = {3, 10, 5, 7, 8};

    int ans = maximum(arr, 0, 5);
    cout << "The maximum element is: " << ans << endl;

    return 0;
}