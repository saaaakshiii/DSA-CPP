#include <iostream>

using namespace std;

// Naive

// void leftRotateOne(int arr[], int n)
// {
//     int temp = arr[0];

//     for (int i = 1; i < n; i++)
//     {
//         arr[i - 1] = arr[i];
//     }
//     arr[n - 1] = temp;
// }

void reverse(int arr[], int low, int high)
{
    while (low < high)
    {
        swap(arr[low ++], arr[high --]);
    }
}

void leftD(int arr[], int n, int d)
{
    // Naive

    // for (int i = 0; i < d; i++)
    // {
    //     leftRotateOne(arr, n);
    // }

    // Efficient

    // int temp[d];

    // for (int i = 0; i < n; i++)
    // {
    //     temp[i] = arr[i];
    // }

    // for (int i = d; i < n; i++)
    // {
    //     arr[i - d] = arr[i];
    // }

    // for (int i = 0; i < d; i++)
    // {
    //     arr[n - d + i] = temp[i];
    // }

    // Most efficient

    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
}

int main()
{
    int n;
    cout << "Enter size: " << endl;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int d;
    cout << "Enter places: " << endl;
    cin >> d;

    leftD(arr, n, d);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}