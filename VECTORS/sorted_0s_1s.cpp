#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int leftMostOne(vector<vector<int>> &V)
{
    int leftMostOne = -1;
    int maxOnesRow = -1;
    int j = V[0].size() - 1;

    // Finding lefmost one in 0th row
    while (j >= 0)
    {
        leftMostOne = j;
        maxOnesRow = 0;
        j--;
    }

    // check in the rest of the rows if we can find a one left to the one present in the 0th row

    for (int i = 0; i < V.size(); i++)
    {
        while (j >= 0 and V[i][j] == 1)
        {
            leftMostOne = j;
            j--;
            maxOnesRow = i + 1;
        }
    }

    return maxOnesRow;
}

// int maxOnesRow(vector<vector<int>> &V)
// {
//     int maxOnes = INT_MIN;
//     int maxOnesRow = -1;
//     int columns = V[0].size();

//     for (int i = 0; i < V.size(); i++)
//     {
//         for (int j = 0; j < V[i].size(); j++)
//         {
//             if (V[i][j] == 1)
//             {
//                 int numberOfOnes = columns - j;

//                 if (numberOfOnes > maxOnes)
//                 {
//                     maxOnes = numberOfOnes;
//                     maxOnesRow = i + 1;
//                 }
//                 break;
//             }
//         }
//     }

//     return maxOnesRow;
// }

int main()
{
    int n, m;
    cout << "Enter the number of rows and columns of matrix: " << endl;
    cin >> n >> m;

    vector<vector<int>> V(n, vector<int>(m));

    cout << "Enter )s and 1s in sorted order: " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> V[i][j];
        }
    }

    int ans = leftMostOne(V);
    cout << "The row with maximum number of ones is:" << ans << endl;

    return 0;
}