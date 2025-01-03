#include <bits/stdc++.h>

// This shape will be comprised of a series of adjacent bars, each with a specified height stored in an array.

using namespace std;

int getMaxArea(int arr[], int n)
{
    // Naive
    //  int res = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     int curr = arr[i];

    //     for (int j = i - 1; j >= 0; j--)
    //     {
    //         if (arr[j] >= arr[i])
    //             curr += arr[i];

    //         else
    //             break;
    //     }

    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[j] >= arr[i])
    //             curr += arr[i];
    //         else
    //             break;
    //     }

    //     res = max(res, curr);
    // }

    // return res;

    // Efficient Solution

    stack<int> s;

    int max_area = 0;  
    int tp;            
    int area_with_top; 

    int i = 0;
    while (i < n)
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

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Largest area is: " << getMaxArea(arr, n);

    return 0;
}