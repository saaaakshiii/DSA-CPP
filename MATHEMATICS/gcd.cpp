#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    // Naive

    // int res = min(a, b);

    // while (res > 0)
    // {
    //     if (a % res == 0 && b % res == 0)
    //         break;

    //     res--;
    // }
    // return res;

    // Efficient euclidean algorithm

    // while (a != b)
    // {
    //     if (a > b)
    //         a = a - b;
    //     else
    //         b = b - a;
    // }

    // return a;

    // Optimised approach

    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    int a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;

    cout << "The gcd of both the numbers is: " << gcd(a, b);

    return 0;
}