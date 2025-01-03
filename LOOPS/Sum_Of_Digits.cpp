#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Enter any number: " << endl;
    cin >> x;

    int sum = 0;

    while (x > 0)
    {
        int last = x % 10;
        sum += last;
        x /= 10;
    }

    cout << "The sum of digits is: " << sum << endl;

    return 0;
}