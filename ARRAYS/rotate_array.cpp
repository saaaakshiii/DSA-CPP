#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter size: " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter rotation steps: " << endl;
    cin >> k;

    k = k % n; // as k can be greater than n
    int j = 0;

    int ansArr[n];

    // Inserting last k elements in answer array

    for (int i = n - k; i < n; i++)
    {
        ansArr[j++] = arr[i];
    }

    // insert first n-k elements in answer array

    for (int i = 0; i <= k; i++)
    {
        ansArr[j++] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << ansArr[i] << " ";
    }

    return 0;
}