c#include <iostream>

using namespace std;

int sum(int n)
{
    if (n >= 0 && n <= 9)
    {
        return n;
    }

    return sum(n / 10) + n % 10;
}

int main()
{
    int n;
    cout << "Enter any number: " << endl;
    cin >> n;

    int ans = sum(n);
    cout << ans << endl;

    return 0;
}