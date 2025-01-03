#include <iostream>
#include <cmath>

using namespace std;

int f(int n, int d)
{
    if (n == 0)
    {
        return 0;
    }

    return pow(n % 10, d) + f(n / 10, d);
}

int main()
{
    int n, d = 0, temp;
    cin >> n;
    temp=n;

    while (temp != 0)
    {
        temp /= 10;
        d++;
    }

    int ans = f(n, d);

    if (ans == n)
    {
        cout << "yes";
    }
    else
        cout << "no";

    return 0;
}