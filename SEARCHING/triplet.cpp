#include <iostream>

using namespace std;

bool ispair(int arr[], int n, int x, int si)
{
    int i = si, j = n - 1;

    while (i < j)
    {
        if (arr[i] + arr[j] == x)
            return true;

        else if (arr[i] + arr[j] > x)
            j--;

        else
            i++;
    }
    return false;
}

bool triplet(int arr[], int n, int x)
{
    for (int i = 0; i < n - 2; i++)
    {
        if (ispair(arr, n, (x - arr[i]), i + 1))
            return true;
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter array size: " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x;
    cout << "Enter value: " << endl;
    cin >> x;

    cout << triplet(arr, n, x);

    return 0;
}