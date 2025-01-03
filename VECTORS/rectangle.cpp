#include <iostream>
#include <vector>

using namespace std;

int rectangleSum(vector<vector<int>> &V, int l1, int r1, int l2, int r2)
{

    int sum = 0;

    // first method

    // for (int i = l1; i <= l2; i++)
    // {
    //     for (int j = r1; j <= r2; j++)
    //     {
    //         sum += V[i][j];
    //     }
    // }
    // return sum;

    // second method

    // prefix sum array calculated row wise
    // for (int i = 0; i < V.size(); i++)
    // {
    //     for (int j = 1; j < V[i].size(); j++)
    //     {
    //         V[i][j] += V[i][j - 1];
    //     }
    // }
    // // final sum
    // for (int i = l1; i <= l2; i++)
    // {
    //     if (r1 != 0)
    //     {
    //         sum += (V[i][r2] - V[i][r1 - 1]);
    //     }

    //     else if (r1 == 0)
    //     {
    //         // V[i][r1-1]=0
    //         sum += V[i][r2];
    //     }
    // }

    // return sum;

    // third method
    // prefix sum array row wise
    for (int i = 0; i < V.size(); i++)
    {
        for (int j = 1; j < V[i].size(); j++)
        {
            V[i][j] += V[i][j - 1];
        }
    }

    // prefix sum array column wise

    for (int i = 1; i < V.size(); i++)
    {
        for (int j = 0; j < V[i].size(); j++)
        {
            V[i][j] += V[i - 1][j];
        }
    }

    // final sum
    int top_sum = 0, left_sum = 0, topleft_sum = 0;
    if (l1 != 0)
        top_sum = V[l1 - 1][r2];
    if (r1 != 0)
        left_sum = V[l2][r1 - 1];
    if (l1 != 0 && r1 != 0)
        topleft_sum = V[l1 - 1][r1 - 1];

    sum = V[l2][r2] - top_sum - left_sum + topleft_sum;

    return sum;
}

int main()
{
    int n, m;
    cout << "Enter dimensions " << endl;
    cin >> n >> m;

    vector<vector<int>> V(n, vector<int>(m));

    cout << "Enter elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> V[i][j];
        }
    }

    int l1, r1, l2, r2;
    cout << "Enter start and end coordinates of rectangle: " << endl;
    cin >> l1 >> r1 >> l2 >> r2;

    // rectangleSum(V, l1, r1, l2, r2);

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << V[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int sum = rectangleSum(V, l1, r1, l2, r2);
    cout << "The sum is: " << sum << endl;

    return 0;
}