#include <bits/stdc++.h>

using namespace std;

vector<int> finalPrices(vector<int> &prices)
{
    int n = prices.size();
    vector<int> ans = prices; // Initialize the answer vector with original prices
    stack<int> s;             // To store indices of elements

    for (int i = 0; i < n; ++i)
    {
        // Check for discounts using the stack
        while (!s.empty() && prices[s.top()] >= prices[i])
        {
            ans[s.top()] -= prices[i]; // Apply discount
            s.pop();                   // Remove the element after applying the discount
        }
        s.push(i); // Push the current index onto the stack
    }

    return ans;
}

int main()
{
    vector<int> prices = {8, 4, 6, 2, 3};
    vector<int> ans=finalPrices(prices);

    for (int i = 0; i < prices.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}