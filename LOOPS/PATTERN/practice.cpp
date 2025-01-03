#include <iostream>

using namespace std;

void reverse(int arr[], int start, int end)
{
    while (start < end)
    {
        swap(arr[start++], arr[end--]);
    }
}

void rotate(int arr[], int n, int d)
{
    reverse(arr, 0, d-1);
    reverse(arr, d, n-1);
    reverse(arr, 0, n-1);
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    int d;
    cin >> d;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    rotate(arr, n, d);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}