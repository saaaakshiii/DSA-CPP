// Stock buy and sell
//  The cost of a stock on each day is given in an array. Find the maximum profit that you can make by buying and selling on those days. If the given array of prices is sorted in decreasing order, then profit cannot be earned at all.

#include <iostream>

using namespace std;

int maxProfit(int price[], int start, int end)
{
    // Naive

    // if (end <= start)
    //     return 0;
    // int profit = 0;

    // for (int i = start; i < end; i++)
    // {
    //     for (int j = i + 1; j <= end; j++)
    //     {
    //         if (price[j] > price[i])
    //         {
    //             int curr_profit = price[j] - price[i] + maxProfit(price, start, i - 1) + maxProfit(price, j + 1, end);
    //             profit = max(profit, curr_profit);
    //         }
    //     }
    // }
    // return profit;

    // Efficient solution

    int profit = 0;

    for (int i = 1; i <= end; i++)
    {
        if (price[i] > price[i - 1])
            profit += (price[i] - price[i - 1]);
    }

    return profit;
}

int main()
{
    int n;
    cout << "Enter size: " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter price values: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Maximum profit is: " << maxProfit(arr, 0, n - 1) << endl;

    return 0;
}