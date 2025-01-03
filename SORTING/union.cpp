#include <bits/stdc++.h>

using namespace std;

void union_arr(int a[], int b[], int m, int n)
{
    // Naive

    // int c[m + n];

    // for (int i = 0; i < m; i++)
    //     c[i] = a[i];

    // for (int i = 0; i < n; i++)
    //     c[i + m] = b[i];

    // sort(c, c + (m + n));

    // for (int i = 0; i < m + n; i++)
    // {
    //     if (i == 0 || c[i] != c[i - 1])
    //         cout << c[i] << " ";
    // }

    //Efficient

    int i=0, j=0;

    while(i<m && j<n)
    {
        if(i>0 && a[i]==a[i-1])
        {
            i++;
            continue;
        }
        if(j>0 && b[j]==b[j-1])
        {
            j++;
            continue;
        }

        if(a[i]>b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }

        if(b[j]> a[i])
        {
            cout<<b[j]<<" ";
            j++;
        }

        else{
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }

    while(i<m)
    {
        cout<<a[i]<<" ";
        i++;
    }

    while(j<n)
    {
        cout<<b[j]<<" ";
        j++;
    }
}

int main()
{
    int n, m;
    cout << "Enter size of both the arrays: " << endl;
    cin >> n >> m;

    int a[m], b[n];

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

    cout << "Union of both arrays is: " << endl;

    union_arr(a, b, m, n);

    return 0;
}