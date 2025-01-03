#include <iostream>
#include <cmath>

using namespace std;

int msb(int n)
{
    int temp = log2(n);
    return pow(2, temp);
}

int main()
{
    int n;
    cin >> n;

    int ans = msb(n);
    cout << ans;

    return 0;
}