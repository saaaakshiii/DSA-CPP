#include <iostream>

using namespace std;

int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    int ans = fibonacci(n - 1) + fibonacci(n - 2);

    return ans;
}

int main()
{
    int n;
    cout << "Enter any number: " << endl;
    cin >> n;

    int res = fibonacci(n);
    cout << "The fibonacci series upto " << n << " is: " << res << endl;

    return 0;
}