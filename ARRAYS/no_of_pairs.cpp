#include <iostream>

using namespace std;

int main()
{
    int n = 7;
    int arr[n] = {1, 2, 3, 4, 5, 6, 7};

    int pairs = 0;

    int x = 5;

    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        if (arr[i] + arr[j] == x)
        {
            pairs++;
            i++; // important as more than one pair might be present
            j--;
        }

        else if (arr[i] + arr[j] > x)
        {
            j--;
        }
        else if (arr[i] + arr[j] < x)
        {
            i++;
        }
    }

    if (pairs != 0)
    {
        cout << "The number of pairs are: " << pairs << endl;
    }
    else if (pairs == 0)
    {
        cout << "No such pair exists" << endl;
    }

    return 0;
}