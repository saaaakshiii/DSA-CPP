#include <bits/stdc++.h>

using namespace std;

void transpose(vector<vector<int>> &mat)
{
    int n = mat.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
            swap(mat[i][j], mat[j][i]);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }

    transpose(arr);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}