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

    int x;
    cout << "Enter the elements you're searching: " << endl;
    cin >> x;

    int position = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            position = i;
            break;
        }
    }

    cout << position;

    return 0;
}
