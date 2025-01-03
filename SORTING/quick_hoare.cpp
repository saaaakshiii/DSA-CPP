#include <iostream>

using namespace std;

int partition(int arr[], int l, int h)
{
    int pivot = arr[l], i = l - 1, j = h + 1;

    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);

        do
        {
            j--;
        } while (arr[j] > pivot);

        if (i >= j)
            return j;

        swap(arr[i], arr[j]);
    }
}

void qsort(int arr[], int l, int h)
{
    if (l < h)
    {
        int pi = partition(arr, l, h);
        qsort(arr, l, pi);
        qsort(arr, pi + 1, h);
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[7] = {8, 4, 7, 9, 3, 10, 5};

    cout << "Sorted array: " << endl;
    qsort(arr, 0, 6);
    print(arr, 7);

    return 0;
}