#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number upto which you want the series: " << endl;
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum -= i;
        }

        else
            sum += i;
    }

    cout << "The sum of the series is: " << sum << endl;

    return 0;
}