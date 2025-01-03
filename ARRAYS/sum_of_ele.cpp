#include <iostream>

using namespace std;

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

    // int sum = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     sum += arr[i];
    // }

    // cout << "The sum of all the elements is: " << sum << endl;

    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "The largest element is: " << max << endl;

    return 0;
}