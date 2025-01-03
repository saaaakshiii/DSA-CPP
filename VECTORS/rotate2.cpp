#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void rotateArray(vector<vector<int>> &V)
{
    // transpose

    for (int i = 0; i < V.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(V[i][j], V[j][i]); // only lower diagonal elements are being swapped
        }
    }

    // Reverse every row

    for (int i = 0; i < V.size(); i++)
    {
        reverse(V[i].begin(), V[i].end());
    }

    return;
}

int main()
{
    int n;
    cout << "Enter row/column" << endl;
    cin >> n;

    vector<vector<int>> V(n, vector<int>(n));

    cout << "Enter elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> V[i][j];
        }
    }

    rotateArray(V);

    cout << "The resultant matrix is: " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << V[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}