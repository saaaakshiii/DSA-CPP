#include <bits/stdc++.h>

using namespace std;

void sieve_of(int n)
{
    vector<bool> isprime(n + 1, true);

    for (int i = 2; i <= n; i++)
    {
        if (isprime[i])
        {
            cout << i << " ";

            for (int j = i * i; j <= n; j = j + i)
            {
                isprime[j] = false;
            }
        }
    }
}

int main()
{
    int num;
    cout << "Enter any number: " << endl;
    cin >> num;

    cout << "Prime numbers till " << num << " are: " << endl;
    sieve_of(num);

    return 0;
}