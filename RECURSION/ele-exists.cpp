#include <iostream>

using namespace std;

bool f(int *arr, int n, int i, int x)
{
    // base case
    if (i == n)
    {
        //array is exhausted
        return false;
    }

    return (arr[i] == x) || f(arr, n, i + 1, x);
}

int main()
{
    int n = 5;
    int arr[n] = {23, 45, 67, 89, 31};

    int x = 45;
    bool ans = f(arr, n, 0, x);

    if (ans == 1)
    {
        cout << "YES";
    }

    else
        cout << "NO";
    return 0;
}