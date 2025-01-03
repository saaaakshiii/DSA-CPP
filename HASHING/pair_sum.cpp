#include <bits/stdc++.h>

using namespace std;

bool isPair(int arr[], int n, int sum)
{
    unordered_set<int> h;

    for (int i = 0; i < n; i++)
    {
        if (h.find(sum - arr[i]) != h.end())
            return true;

        h.insert(arr[i]);
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << isPair(arr, 9, 15);

    return 0;
}