#include <iostream>

using namespace std;

void print_div(int num)
{
    // Naive

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
    }

    // Efficient

    // for (int i = 1; i * 1 <= num; i++)
    // {
    //     if (num % i == 0)
    //     {
    //         if (i != num / i) // for perfect square we don't want the same number to be printed twice eg 49=7*7
    //             cout << num / i << " ";

    //         else
    //             cout << i << " ";
    //     }
    // }

    // Sorted Output

    // int i;

    // for (i = 1; i * i < num; i++)
    // {
    //     if (num % i == 0)
    //         cout << i << " ";
    // }

    // if (i - (num / i) == 1)
    // {
    //     i--;
    // }
    // for (; i >= 1; i--)
    // {
    //     if (num % i == 0)
    //         cout << num / i << " ";
    // }
}

int main()
{
    int n;
    cout << "Enter any number: " << endl;
    cin >> n;

    cout << "All divisors of " << n << " are: " << endl;
    print_div(n);

    return 0;
}