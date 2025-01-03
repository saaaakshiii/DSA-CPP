#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Enter any number: " << endl;
    cin >> x;

    int digits = 0;

    while (x != 0)
    {
        digits++;
        x /= 10;
    }

    cout << "The number of digits are: " << digits << endl;

    return 0;
}