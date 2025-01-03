// only one element repeats any number of times
// Smallest element is zero

#include <iostream>

using namespace std;

int findRepeating(int arr[], int n)
{
    int slow = arr[0] + 1, fast = arr[0] + 1;

    do
    {
        slow = arr[slow] + 1;
        fast = arr[arr[fast] + 1] + 1;
    } while (slow != fast);

    slow = arr[0] + 1;

    while (slow != fast)
    {
        fast = arr[fast] + 1;
        slow = arr[slow] + 1;
    }

    return slow-1;
}

int main()
{
    int n;
    cout << "Enter array size: " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Repeating element is: " << findRepeating(arr, n);

    return 0;
}