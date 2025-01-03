#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    else
        return gcd(b, a % b);
}

int modInverse(int a, int m)
{
    if (m == 1)
        return -1;

    if (gcd(a, m) == 1)
    {
        for (int i = 1; i < m; i++)
        {
            if ((a * i) % m == 1)
                return i;
        }
    }
    else
        return -1;
}

int main()
{
    int a, m;
    cout << "Enter a and m respectively: " << endl;
    cin >> a >> m;

    cout << "The modular multiplicative inverse of " << a << " is: " << modInverse(a, m);

    return 0;
}