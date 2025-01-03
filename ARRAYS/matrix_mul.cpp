#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cout << "Enter rows and columns of 1st matrix: " << endl;
    cin >> n >> m;

    int a[n][m];

    cout << "Enter elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int p, q;
    cout << "Enter rows and columns of 2nd matrix: " << endl;
    cin >> p >> q;

    int b[p][q];

    if (m == p)
    {
        cout << "Enter elements of 2nd matrix: " << endl;

        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> b[i][j];
            }
        }
    }

    else if (m != p)
    {
        cout << "The two matrices cannot be multiplied";
    }

    int c[n][q];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < q; j++)
        {
            int value = 0;
            for (int k = 0; k < p; k++)
            {
                value += a[i][k] * b[k][j];
            }
            c[i][j] = value;
        }
    }

    cout << "The result is: " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}