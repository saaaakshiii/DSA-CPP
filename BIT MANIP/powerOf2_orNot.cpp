#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if ((n & n - 1))
        cout << "Nota a power";
    else
        cout << "Power of 2";
    return 0;
}