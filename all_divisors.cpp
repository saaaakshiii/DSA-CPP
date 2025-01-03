#include <iostream>

using namespace std;

void allDiv(int n)
{
    // for (int i = 1; i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << i << " ";
    //     }
    // }

    // Optimised and sorted code

    int i = 1;
    for (i = 1; i * i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }

    for (--i; i >= 1; i--)
    {
        if (n % i == 0 && i * i != n) // checks if a number divides 'n' and it's not repeated twice
        {
            cout << (n / i) << " ";
        }
    }
}

int main()
{
    int n;
    cin >> n;
    allDiv(n);

    return 0;
}