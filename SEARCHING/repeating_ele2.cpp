// All the elements from 1 to max(arr) are present
// 1<=max(arr)<=n-1
// Smallest element is 1

#include <iostream>

using namespace std;

int findRepeating(int arr[], int n)
{
    int slow = arr[0], fast = arr[0];

    do
    {
        slow = arr[slow];
        fast = arr[arr[fast]];

    } while (slow != fast);

    slow = arr[0];

    while (slow != fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }

    return slow;
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