#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = n; j >= i; j--)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    return 0;
}