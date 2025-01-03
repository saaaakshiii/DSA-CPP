#include <iostream>

using namespace std;

void moveToend(int arr[], int n)
{
    // Naive

    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == 0)
    //     {
    //         for (int j = i + 1; j < n; j++)
    //         {
    //             if (arr[j] != 0)
    //             {
    //                 swap(arr[i], arr[j]);
    //             }
    //         }
    //     }
    // }

    // Efficient

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
}

int main()
{
    int n;
    cout << "Enter size: " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    moveToend(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}