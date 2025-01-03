#include <iostream>

using namespace std;

int fact(int n, int k)
{
    if (n == 0 || n == 1)
        return k;

    else
        return fact(n - 1, n * k);
}

int factorial(int n)
{
    // if (n == 0 || n == 1)
    //     return 1;

    // return n * factorial(n - 1);

    // Tail recursive
    int k = 1;
    return fact(n, k);
}

int main()
{
    int n;
    cout << "Enter any number: " << endl;
    cin >> n;

    int ans = factorial(n);
    cout << "The factorial of " << n << " is: " << ans << endl;

    return 0;
}