#include <iostream>

using namespace std;

int power(int n, int x)
{
    int res = 1;

    while (x > 0)
    {
        if (x % 2 != 0)
        {
            res *= n;
        }
        n *= n;
        x /= 2;
    }
    return res;
}

int main()
{
    int n, x;
    cin >> n >> x;

    int ans = power(n, x);
    cout << ans;

    return 0;
}