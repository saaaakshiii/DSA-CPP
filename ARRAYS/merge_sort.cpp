#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of 1st array: " << endl;
    cin >> n;

    int arr1[n];

    cout << "Enter elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    int m;
    cout << "Enter the size of 2nd array: " << endl;
    cin >> m;

    cout << "Enter elements: " << endl;

    int arr2[m];

    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    int res[m + n];

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            res[k] = arr1[i];
            k++;
            i++;
        }

        else if (arr1[i] > arr2[j])
        {
            res[k] = arr2[j];
            j++;
            k++;
        }

        else if (arr1[i] == arr2[j])
        {
            res[k] = arr1[i];
            i++;

            k++;
        }
    }

    while (i < n)
    {
        // this means that 2nd array got exhausted first and we still got elements left in 1st array

        res[k] = arr1[i];
        i++;
        k++;
    }

    while (j < m)
    {
        // arr1 got exhausted first and we still got elements left in arr2

        res[k] = arr2[j];
        j++;
        k++;
    }

    cout << "The resultant array is: " << endl;

    for (int i = 0; i < n + m; i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}