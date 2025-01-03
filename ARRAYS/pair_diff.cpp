#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter size: " << endl;
    cin >> n;

    cout << "Enter elements: " << endl;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x;
    cout << "Enter a number : " << endl;
    cin >> x;

    int i = 0;
    int j = 1;

    bool found = false;

    while (i < j)
    {
        if (abs(arr[i] - arr[j]) == x)
        {
            found = true;
            break;
        }

        else if (abs(arr[i] - arr[j]) > x ) // we need to increase the abs difference
        {
            j++;
        }

        else if (abs(arr[i] - arr[j]) < x) // we need to decrease the abs diff
        {
            i++;
        }
        
    }

    if (found == true)
    {
        cout << "Exists ";
    }
    else if (found != true)
    {
        cout << "DNE";
    }

    return 0;
}