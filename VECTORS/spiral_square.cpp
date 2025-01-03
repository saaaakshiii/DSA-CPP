#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> spiralSquare(int n)
{
    vector<vector<int>> V(n, vector<int>(n));

    int left = 0;
    int right = n - 1;
    int top = 0;
    int bottom = n - 1;

    int direction = 0;
    int value = 1; // to fill in spiral values

    while (left <= right and top <= bottom)
    {
        // left to right
        if (direction == 0)
        {
            for (int col = left; col <= right; col++)
            {
                V[top][col] = value++;
            }
            top++;
        }

        // top to bottom
        else if (direction == 1)
        {
            for (int row = top; row <= bottom; row++)
            {
                V[row][right] = value++;
            }
            right--;
        }

        // right to left
        else if (direction == 2)
        {
            for (int col = right; col >= left; col--)
            {
                V[bottom][col] = value++;
            }
            bottom--;
        }

        // bottom to top
        else if (direction == 3)
        {
            for (int row = bottom; row >= top; row--)
            {
                V[row][left] = value++;
            }
            left++;
        }
        direction = (direction + 1) % 4;
    }

    return V;
}

int main()
{
    int n;
    cout << "Enter size: " << endl;
    cin >> n;

    vector<vector<int>> V(n, vector<int>(n));

    V = spiralSquare(n);

    cout << "The result is: " << endl;

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