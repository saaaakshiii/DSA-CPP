#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cout << "Enter any decimal number: " << endl;
    cin >> n;

    int ans = 0;
    int power = 1;

    while (n > 0)
    {
        int lastDigit = n % 10;
        ans += (lastDigit * power);
        power *= 2;
        n /= 10;
    }

    // Using Bitwise operators
    // int i = 0;
    // while (n != 0)
    // {
    //     int bit = n & 1;
    //     ans = (bit * pow(2, 1) + ans);
    //     n = n >> 1;
    //     i++;
    // }

    cout << "The binary to decimal conversion is: " << ans << endl;

    return 0;
}