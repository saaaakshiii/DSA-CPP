#include <bits/stdc++.h>

using namespace std;

void boundary(vector<vector<int>> arr)
{
    int r = arr[0].size(), c = arr.size();

    if (r == 1)
    {
        for (int i = 0; i < c; i++)
            cout << arr[0][i]<<" ";
    }
    else if (c == 1)
    {
        for (int i = 0; i < r; i++)
            cout << arr[i][0]<<" ";
    }
    else
    {
        // topmost row elements
        for (int i = 0; i < c; i++)
            cout << arr[0][i]<<" ";

        // rightmost col elements
        for (int i = 1; i < r; i++)
            cout << arr[i][c - 1]<<" ";

        // bottommost row elements
        for (int i = c - 2; i >= 0; i--)
            cout << arr[r - 1][i]<<" ";

        // leftmost col elements
        for (int i = r - 2; i > 0; i--)
        {
            cout << arr[i][0]<<" ";
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(m, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    boundary(arr);

    return 0;
}