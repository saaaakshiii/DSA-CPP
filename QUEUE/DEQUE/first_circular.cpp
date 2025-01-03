// We need to find the first petrol pump from where we can visit all petrol pumps and come back to the petrol pump without ever going out of the petrol.

#include <bits/stdc++.h>

using namespace std;

int fristPetrolPump(int petrol[], int dist[], int n)
{
    // Naive-O(n^2)

    // for (int start = 0; start < n; start++)
    // {
    //     int curr_petrol = 0;
    //     int end = start;

    //     while (true)
    //     {
    //         curr_petrol += (petrol[end] - dist[end]);

    //         if (curr_petrol < 0)
    //         {
    //             break;
    //         }
    //         end = (end + 1) % n;
    //         if (end == start)
    //             return start + 1;
    //     }
    // }
    // return -1;

    // Efficient-O(n)

    int start = 0, curr_petrol = 0, prev_petrol = 0;

    // prev_petrol is used to store the value of the capacity as
    // soon as the value of curr_petrol becomes negative so as
    // not to traverse the array twice in order to get the
    // solution

    for (int i = 0; i < n; i++)
    {
        curr_petrol += (petrol[i] - dist[i]);

        if (curr_petrol < 0)
        {
            start = i + 1;
            prev_petrol += curr_petrol;
            curr_petrol = 0;
        }
    }
    return ((curr_petrol + prev_petrol) >= 0) ? (start + 1) : -1;
}

int main()
{
    int petrol[] = {4, 8, 7, 4}, dist[] = {6, 5, 3, 5};
    cout << fristPetrolPump(petrol, dist, 4);

    return 0;
}