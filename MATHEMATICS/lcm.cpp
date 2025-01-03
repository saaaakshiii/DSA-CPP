#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int lcm(int a, int b)
{
    // Naive

    // int res = max(a, b);

    // while (true)
    // {
    //     if (res % a == 0 && res % b == 0)
    //     {
    //         return res;
    //     }
    //     res++;
    // }
    // return res;

    // Efficient approach
    //  a*b= gcd(a,b)*lcm(a,b)

    return (a * b) / gcd(a, b);
}

int main()
{
    int a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;

    cout << "The LCM is: " << lcm(a, b) << endl;

    return 0;
}