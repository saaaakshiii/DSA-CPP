#include <iostream>

using namespace std;

void swap(int arr[], int n)
{
    int i = 0;

    while (i+1 < n)
    {
        swap(arr[i], arr[i + 1]);
        i = i + 2;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    swap(arr, n);

    return 0;
}