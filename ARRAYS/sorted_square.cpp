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

    int i = 0;
    int j = n - 1;
    int k = n - 1;

    int ans[n];

    while (i <= j && k >= 0)
    {
        if (abs(arr[i]) > abs(arr[j]))
        {
            ans[k] = arr[i] * arr[i];
            i++;
            k--;
        }

        else
        {
            ans[k] = arr[j] * arr[j];
            j--;
            k--;
        }
    }

    cout << "The result is: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}