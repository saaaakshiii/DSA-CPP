#include <iostream>

using namespace std;

void intersection(int a[], int b[], int n, int m)
{
    // Naive

    // for (int i = 0; i < m; i++)
    // {
    //     if (i > 0 && a[i] == a[i - 1])
    //         continue;

    //     for (int j = 0; j < n; j++)
    //     {
    //         if (a[i] == b[j])
    //         {
    //             cout << a[i] << " ";
    //             break;
    //         }
    //     }
    // }

    // Efficient

    int i = 0, j = 0;

    while (i < m && j < n)
    {
        if (i > 0 && a[i] == a[i - 1])
        {
            i++;
            continue;
        }
        if (a[i] < b[j])
            i++;
        if (a[i] > b[j])
            j++;

        else
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
}

int main()
{
    int n, m;
    cout << "Enter the size of arrays: " << endl;
    cin >> n >> m;

    int a[m], b[n];

    cout << "Enter elements of 1st array: " << endl;

    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    cout << "Intersection is: " << endl;
    intersection(a, b, n, m);

    return 0;
}