// // Median of row-wise sorted array

// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;

// const int MAX = 100;

// int median(int mat[][MAX], int r, int c)
// {
//     int small = INT_MAX, big = INT_MIN;

//     for (int i = 0; i < r; i++)
//     {
//         if (mat[i][0] < small)
//             small = mat[i][0];
//         if (mat[i][0] > big)
//             big = mat[i][0];
//     }

//     int desired = (r * c) / 2;

//     while (small < big)
//     {
//         int mid = small + (big - small) / 2;
//         int place = 0;

//         for (int i = 0; i < r; i++)
//         {
//             place += upper_bound(mat[i], mat[i] + c, mid) - mat[i];
//         }
//         if (place < desired)
//             small = mid + 1;

//         else
//             big = mid;
//     }
//     return small;
// }

// int main()
// {
//     int r, c;

//     cin >> r >> c;

//     int mat[r][MAX];

//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             cin >> mat[i][j];
//         }
//     }

//     cout << median(mat, r, c);

//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const int MAX = 100;

int binaryMedian(int m[][MAX], int r, int c)
{
    int min = INT_MAX, max = INT_MIN;
    for (int i = 0; i < r; i++)
    {
        // Finding the minimum element
        if (m[i][0] < min)
            min = m[i][0];

        // Finding the maximum element
        if (m[i][c - 1] > max)
            max = m[i][c - 1];
    }

    int desired = (r * c + 1) / 2;
    while (min < max)
    {
        int mid = min + (max - min) / 2;
        int place = 0;

        // Find count of elements smaller than mid
        for (int i = 0; i < r; ++i)
            place += upper_bound(m[i], m[i] + c, mid) - m[i];
        if (place < desired)
            min = mid + 1;
        else
            max = mid;
    }
    return min;
}

int main()
{
    int r = 3, c = 3;
    int m[][MAX] = {{1, 3, 5}, {2, 6, 9}, {3, 6, 9}};
    cout << "Median is " << binaryMedian(m, r, c) << endl;
    return 0;
}