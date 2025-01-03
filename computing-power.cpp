#include <iostream>

using namespace std;

int power(int n, int x)
{
    if (x == 0)
        return 1;

    int temp = power(n, x / 2);

    temp = temp * temp;

    if (x % 2 == 0)
        return temp;
    else
        return n * temp;
}

int main()
{
    int n, x;
    cin >> n >> x;

    int ans = power(n, x);
    cout << ans;

    return 0;
}