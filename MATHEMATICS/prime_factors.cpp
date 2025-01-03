#include <iostream>

using namespace std;

bool isPrime(int num)
{
    bool ans = true;
    int i = 2;

    if (num == 1 || num == 0)
        ans = true;

    while (i * i <= num)
    {
        if (num % i == 0)
        {
            ans = false;
            break;
        }
        i++;
    }
    return ans;
}

void primeFactors(int n)
{
    // Naive

    // for (int i = 2; i < n; i++)
    // {
    //     if (isPrime(i))
    //     {
    //         int x = i;

    //         while (n % x == 0)
    //         {
    //             cout << i << " ";
    //             x *= i;
    //         }
    //     }
    // }

    // Efficient

    // if (n <= 1)
    //     return;

    // for (int i = 2; i * i <= n; i++)
    // {
    //     while (n % i == 0)
    //     {
    //         cout << i << " ";
    //         n /= i;
    //     }
    // }
    // if (n > 1)
    //     cout << n;

    //Most efficient

    
}

int main()
{
    int n;
    cout << "Enter any number: " << endl;
    cin >> n;

    cout << "The prime factors of " << n << " are: " << endl;
    primeFactors(n);

    return 0;
}