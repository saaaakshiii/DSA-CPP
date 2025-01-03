// Trailing zeroes in a factorial

#include <iostream>

using namespace std;

int count_zeroes(int num)
{
    int res = 0;

    for (int i = 5; i <= num; i *= 5)
    {
        res += (num / i);
    }
    return res;
}

int main()
{
    int n;
    cout << "Enter any number: " << endl;
    cin >> n;

    cout << "The number of trailing zeroes int factorial are: " << count_zeroes(n);

    return 0;
}