#include <bits/stdc++.h>

using namespace std;

int compute(int base, int p)
{
    // int res = 1;

    // for (int i = 0; i < p; i++)
    // {
    //     res *= base;
    // }

    // return res;

    // Efficient solution

    if (p == 0)
        return 1;

    int temp = compute(base, p / 2);

    temp *= temp;

    if (p % 2 == 0)
        return temp;

    else
        return (temp * base);
}

int main()
{
    int base, power;

    cout << "Enter base and power respectively: " << endl;
    cin >> base >> power;

    cout << base << " raised to " << power << " is: " << compute(base, power);

    return 0;
}