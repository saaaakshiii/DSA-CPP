#include <iostream>

using namespace std;

int sqRoot(int x)
{
    // Naive

    // int i = 1;

    // while (i * i <= x)
    //     i++;
    // return (i-1);

    // Using Binary Search

    int low = 1, high = x, ans = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        int msq = mid * mid;

        if (msq == x)
            return mid;

        if (msq > x)
            high = mid - 1;

        else
        {
            low = mid + 1;
            ans = mid;
        }
    }

    return ans;
}

int main()
{
    int x;
    cin >> x;

    cout << sqRoot(x) << endl;

    return 0;
}