#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int k;
    cin >> k;

    int temp = 1 << (k - 1);

    if (n & temp)
        cout << "Set";
    else
        cout << "Unset";

    return 0;
}