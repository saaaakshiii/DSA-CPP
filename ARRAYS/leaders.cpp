// An element is a leader if it is greater than all the elements to its right side. And the rightmost element is always a leader

#include <iostream>

using namespace std;

void leader(int arr[], int n)
{
    // Naive

    for (int i = 0; i < n; i++)
    {
        bool flag = false;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] <= arr[j])
            {
                flag = true;
                break;
            }
        }

        if (flag == false)
        {
            cout << arr[i] << " ";
        }
    }

    // Efficient

    // int curr_lead = arr[n - 1];
    // cout << curr_lead << " ";

    // for (int i = n - 2; i >= 0; i--)
    // {
    //     if (curr_lead < arr[i])
    //     {
    //         curr_lead = arr[i];
    //         cout << curr_lead << " ";
    //     }
    // }
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

    cout << "The leaders are: " << endl;
    leader(arr, n);

    return 0;
}