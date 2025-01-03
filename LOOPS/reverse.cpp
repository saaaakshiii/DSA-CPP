#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Enter any number: " << endl;
    cin >> x;

    int reverse = 0;

    while (x > 0)
    {
        int last = x % 10;
        reverse = reverse * 10 + last;
        x /= 10;
    }

    cout << "The reverse is: " << reverse << endl;

    return 0;
}