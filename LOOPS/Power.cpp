#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Enter the base and power respectively: " << endl;
    cin >> a >> b;

    int result = 1;

    for (int i = 1; i <= b; i++)
    {
        result*=a;
    }

    cout << "The value of " << a << " raised to the power " << b << " is " << result << endl;

    return 0;
}