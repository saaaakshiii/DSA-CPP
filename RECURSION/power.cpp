#include <iostream>

using namespace std;

// int power(int p, int q)
// {
//     if (q == 0)
//     {
//         return 1;
//     }

//     return p * power(p, q - 1);
// }

// optimised approach

int power(int p, int q)
{
    if (q == 0)
    {
        return 1;
    }

    else if (q % 2 != 0)
    {
        //if q is odd
        int result = power(p, (q - 1) / 2);
        return p * result * result;
    }

    else if (q % 2 == 0)
    {
        //if q is even
        int result = power(p, q / 2);
        return result * result;
    }
}

int main()
{
    int p, q;
    cout << "Enter base and power respectively: " << endl;
    cin >> p >> q;

    int ans = power(p, q);

    cout << p << " to the power " << q << " is: " << ans << endl;

    return 0;
}