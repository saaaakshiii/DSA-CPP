//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find distance of nearest 1 in the grid for each cell.
    vector<vector<int>> nearest(vector<vector<int>> &grid)
    {
        // Code here

        int n = grid.size();
        int m = grid[0].size();

        // Resultant matrix to store distances
        vector<vector<int>> dist(n, vector<int>(m, INT_MAX));

        // Queue for BFS (storing {row, col} pairs)
        queue<pair<int, int>> q;

        // Step 1: Initialize the queue with all cells having '1'
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 1)
                {
                    dist[i][j] = 0; // Distance to itself is 0
                    q.push({i, j}); // Push all '1' cells into the queue
                }
            }
        }

        // Step 2: Perform BFS from all '1' cells
        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}}; // Up, Down, Left, Right

        while (!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            // Explore all 4 neighbors
            for (auto dir : directions)
            {
                int newRow = row + dir.first;
                int newCol = col + dir.second;

                // Check boundary conditions
                if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < m)
                {
                    // Update distance if a shorter path is found
                    if (dist[newRow][newCol] > dist[row][col] + 1)
                    {
                        dist[newRow][newCol] = dist[row][col] + 1;
                        q.push({newRow, newCol}); // Push the neighbor into the queue
                    }
                }
            }
        }

        return dist;
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m, -1));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        vector<vector<int>> ans = obj.nearest(grid);
        for (auto i : ans)
        {
            for (auto j : i)
            {
                cout << j << " ";
            }
            cout << "\n";
        }

        cout << "~" << "\n";
    }
    return 0;
}
// } Driver Code Ends