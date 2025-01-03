#include <bits/stdc++.h>

using namespace std;

void snake(vector<vector<int>> matrix)
{
    int r = matrix[0].size(), c = matrix.size();

    // vector<int> ans;

    for (int i = 0; i < r; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < c; j++)
            {
                cout << matrix[i][j] << " ";
            }
        }
        else
        {
            for (int j = c - 1; j >= 0; j--)
            {
                cout << matrix[i][j] << " ";
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> m >> n;

    vector<vector<int>> arr(m, vector<int>(n));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    snake(arr);

    return 0;
}