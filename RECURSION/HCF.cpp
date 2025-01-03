#include <iostream>

using namespace std;

int f(int a, int b)
{
    if (b > a)
        return f(b, a);
    if (b == 0)
    {
        return a;
    }

    return f(b, a % b);
}

int main()
{
    int ans = f(32, 18);
    cout << ans;

    return 0;
}