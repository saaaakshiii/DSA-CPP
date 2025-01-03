#include <iostream>

using namespace std;

bool evenOdd(int n)
{
    if (n & 1)
    {
        return false;
    }

    else
        return true;
}

int main()
{
    int n;
    cin >> n;

    if (evenOdd(n))
    {
        cout << "Number is even";
    }

    else
        cout << "Number is odd";

    return 0;
}