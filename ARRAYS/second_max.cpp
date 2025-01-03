#include <iostream>
#include <climits>

using namespace std;

// int max_ele(int arr[], int n)
// {
//     int max = arr[0];

//     for (int i = 0; i < n; i++)
//     {
//         if (max < arr[i])
//         {
//             max = arr[i];
//         }
//     }

//     return max;
// }

int second_max(int arr[], int n)
{
    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    // better code as array is being traversed less
    int second_max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > second_max && arr[i] != max)
        {
            second_max = arr[i];
        }
    }

    return second_max;
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

    // int largest = max_ele(arr, n);

    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == largest)
    //     {
    //         arr[i] = -1;
    //     }
    // }

    // cout << "The second largest element is: " << max_ele(arr, n) << endl;

    cout << "The second largest element is: " << second_max(arr, n) << endl; // second method

    return 0;
}