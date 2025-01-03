#include <bits/stdc++.h>

using namespace std;

bool isSubArray(int arr[], int n)
{
    unordered_set<int> h;
    int pre_sum = 0;

    for (int i = 0; i < n; i++)
    {
        pre_sum += arr[i];
        if (h.find(pre_sum) != h.end())
            return true;

        if (pre_sum == 0)
            return true;

        h.insert(pre_sum);
    }
    return false;
}

int main()
{
    int arr[] = {1, 4, 13, -3, -10, 5};

    cout << isSubArray(arr, 6);

    return 0;
}