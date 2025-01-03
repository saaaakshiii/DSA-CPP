#include <bits/stdc++.h>

using namespace std;

int countDis(int arr[], int n)
{
    unordered_set<int> s(arr, arr + n);
    return s.size();
}

int main()
{
    int arr[] = {15, 12, 13, 12, 13, 13, 18};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << countDis(arr, n);

    return 0;
}