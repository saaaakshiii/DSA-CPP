#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cout << "Enter row and column of matrix: " << endl;
    cin >> n >> m;

    int arr[n][m];

    cout << "Enter elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "The transpose is: " << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}