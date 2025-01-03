#include <iostream>

using namespace std;

// void f(int n)
// {
//     // Increasing sequence from 1 to n

//     // if (n < 1)
//     // {
//     //     return;
//     // }

//     // f(n - 1);
//     // cout << n << " ";
// }

// void f(int k, int n)
// {
//     // K multiples of n

//     if (k < 1)
//     {
//         return;
//     }

//     f(k - 1, n);
//     cout << n * k << " ";
// }

int f(int n)
{
    // Alternate sum

    if (n == 0)
    {
        return 0;
    }

    return f(n - 1) + ((n % 2 == 0) ? (-n) : (n));
}
int main()
{
    // Q1
    // int n = 5;
    // f(n);

    // Q2

    // int k = 8, n = 3;
    // f(k, n);

    // Q3

    int ans = f(5);
    cout << ans << endl;

    return 0;
}