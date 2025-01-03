#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: " << endl;
    cin >> n;

    cout << "Enter elements: " << endl;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x;
    cout << "Enter a number for which you want a pair: " << endl;
    cin >> x;

    int ans = -1;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = n - 1; j > 0; j--)
    //     {
    //         if (arr[i] + arr[j] == x)
    //         {
    //             ans = 1;
    //         }
    //     }
    // }

    // if (ans == 1)
    // {
    //     cout << "A pair exists";
    // }

    // else if (ans != 1)
    // {
    //     cout << "DNE";
    // }

    // more effiecient than using for loop

    int i = 0;
    int j = n - 1;

    while (i < j) // pointer j should not be smaller than i because everything before i is already explored
    {
        if (arr[i] + arr[j] == x)
        {
            ans = 1;
            break;
        }
        else if (arr[i] + arr[j] < x)
        {
            // sum is less,increase sum
            i++;
        }
        else if (arr[i] + arr[j] > x)
        {
            // sum is more, decrease sum
            j--;
        }
    }

    if (ans == 1)
    {
        cout << "A pair exists";
    }

    else if (ans != 1)
    {
        cout << "DNE";
    }

    return 0;
}