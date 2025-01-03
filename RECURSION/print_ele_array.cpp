#include <iostream>

using namespace std;

void print(int *arr, int idx, int n)
{
    // base case
    if (idx == n)
        return;

    // self work
    cout << arr[idx] << " ";

    // assumption
    print(arr, idx + 1, n); // assume it works correctly--> it will print the remaining array
}

int main()
{
    int arr[5] = {3,5,68,4,25};

    print(arr, 0, 5);

    return 0;
}