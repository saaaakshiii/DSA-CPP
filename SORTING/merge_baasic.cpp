#include <iostream>

using namespace std;

void merge_sort(int a[], int b[], int n, int m)
{
    int i = 0, j = 0;

    while (i < m && j < n)
    {
        if (a[i] <= b[j])
        {
            cout << a[i] << " ";
            i++;
        }

        else
        {
            cout << b[j] << " ";
            j++;
        }
    }

    while (i < m)
    {
        cout << a[i] << " ";
        i++;
    }

    while (j < n)
    {
        cout << b[j] << " ";
        j++;
    }
}

int main()
{
    int n, m;
    cout << "Enter size of arrays: " << endl;
    cin >> n >> m;

    int a[n], b[m];

    cout << "Enter elements of 1st array: " << endl;

    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    cout << "Enter elements of 2nd array: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    merge_sort(a, b, n, m);

    return 0;
}