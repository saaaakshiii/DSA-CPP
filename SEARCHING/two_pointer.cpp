// To check whether there exists a pair of ints in sorted array that sum equal to the given value

#include <iostream>

using namespace std;

bool pairs(int arr[], int n, int x)
{
    int i = 0, j = n - 1;

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

    cout << pairs(arr, n, x);

    return 0;
}