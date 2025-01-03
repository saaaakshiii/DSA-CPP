#include <bits/stdc++.h>

using namespace std;

void freq(int arr[], int n)
{
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
        mp[arr[i]]++;

    for (auto e : mp)
        cout << e.first << " " << e.second << " " << endl;
}

int main()
{
    int arr[] = {10, 12, 10, 15, 10, 20, 12, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    freq(arr, n);

    return 0;
}