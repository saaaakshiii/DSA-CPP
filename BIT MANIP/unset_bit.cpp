#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int k;
    cin >> k;

    n = n & (~(1 << (k - 1)));

    cout << "Res: " << n;
    return 0;
}