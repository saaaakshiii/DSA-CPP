#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void transpose(int *mat, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << *((mat + j * m) + i) << " ";
        }
        cout << endl;
    }
}

int main()
{
    int mat[4][4], n = 4, m = 4;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> mat[i][j];
        }
    }

    transpose((int *)mat, n, m);

    return 0;
}