#include <iostream>

using namespace std;

int table[256];

void initialize()
{
    table[0] = 0;

    for (int i = 1; i < 256; i++)
    {
        table[i] = table[i & (i - 1)] + 1;
    }
}

int countSetBits(int n)
{
    // Naive-Brian kerningham's algo

    // int count = 0;

    // while (n > 0)
    // {
    //     n = n & (n - 1);
    //     count++;
    // }

    // return count;

    // Lookup Table solution

    return table[n & 255] + table[(n >> 8) & 255] + table[(n >> 16) & 255] + table[(n >> 24)];
}

int main()
{
    int n;
    cin >> n;

    cout << countSetBits(n);

    return 0;
}