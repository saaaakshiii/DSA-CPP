// The span Si of the stock's price on a given day i is defined as the maximum number of consecutive days just before the given day,
// for which the price of the stock on the current day is less than its price on the given day.

#include <bits/stdc++.h>

using namespace std;

void printSpan(int arr[], int n)
{
    // naive

    // for (int i = 0; i < n; i++)
    // {
    //     int span = 1;

    //     for (int j = i - 1; j >= 0 && arr[j] <= arr[i]; j--)
    //     {
    //         span++;
    //     }
    //     cout << span << " ";
    // }

    // Efficient solution
    // Idea--> Span=(index of current ele)-(index of closest greater ele on left)---> if there is a greater ele on lef
    //         Span=index of curr ele +1---> otherwise

    stack<int> s;
    s.push(0);

    cout << "1 ";

    for (int i = 1; i < n; i++)
    {
        while (s.empty() == false && arr[s.top()] <= arr[i])
        {
            s.pop();
        }

        int span = s.empty() ? i + 1 : i - s.top();
        cout << span << " ";
        s.push(i);
    }
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

    printSpan(arr, n);

    return 0;
}