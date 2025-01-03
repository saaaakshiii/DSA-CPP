#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: " << endl;
    cin >> n;

    // Loop for upper triangle

    for (int i = 1; i <= n; i++)
    {
        // This loop does some work for each line

        for (int j = n - i; j >= 1; j--)
        {
            cout << " ";
        }

        int no_of_chars = (2 * i) - 1;

        for (int j = 0; j < no_of_chars; j++)
        {
            cout << (char)('A' + j);
        }
        cout << endl;
    }

    // Loop for lower triangle

    for (int i = n + 1; i <= 2 * n - 1; i++)
    {
        // for spaces

        for (int k = 0; k < i - n; k++)
        {
            cout << " ";
        }

        int no_of_chars = 2 * (2 * n - i) - 1;
        for (int j = 0; j < no_of_chars; j++)
        {
            cout << (char)('A' + j);
        }
        cout << endl;
    }

    return 0;
}