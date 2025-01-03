#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(a, a % b);
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}
int main()
{
    int a = 15, b = 45;
    int ans = lcm(a, b);
    cout << ans;

    return 0;
}