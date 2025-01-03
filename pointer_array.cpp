#include <iostream>

using namespace std;

void process(int *arr, int n)
{
    // inside this function we have access to the array in main

    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i) << " ";
    }
    *(arr + 1) = 33;
    cout << endl;
}

int main()
{
    int arr[3] = {2, 4, 6};
    process(arr, 3);

    for (int i = 0; i < 3; i++)
    {
        cout << *(arr + i) << " ";
    }

    return 0;
}