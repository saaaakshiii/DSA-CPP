#include <bits/stdc++.h>
#define R 4
#define C 4

using namespace std;

int largestHist(int arr[])
{
    stack<int> s;

    int max_area = 0;
    int tp;
    int area_with_top;

    int i = 0;
    while (i < C)
    {
        if (s.empty() || arr[s.top()] <= arr[i])
            s.push(i++);

        else
        {
            tp = s.top();
            s.pop();

            area_with_top = arr[tp] * (s.empty() ? i : i - s.top() - 1);

            if (max_area < area_with_top)
                max_area = area_with_top;
        }
    }

    while (s.empty() == false)
    {
        tp = s.top();
        s.pop();
        area_with_top = arr[tp] * (s.empty() ? i : i - s.top() - 1);

        if (max_area < area_with_top)
            max_area = area_with_top;
    }

    return max_area;
}

int maxRectangle(int arr[][C])
{
    int res = largestHist(arr[0]);

    for (int i = 1; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (arr[i][j])
                arr[i][j] += arr[i - 1][j];
        }
        res = max(res, largestHist(arr[i]));
    }

    return res;
}

int main()
{
    int arr[R][C] = {{0, 1, 1, 0}, {1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 0, 0}};
    cout << "Area of max rectangle is: " << maxRectangle(arr);

    return 0;
}