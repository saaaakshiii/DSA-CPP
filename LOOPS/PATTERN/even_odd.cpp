#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cout << "Enter the value of rows and colummns: " << endl;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if ((i + j) % 2 != 0)
            {
                cout << "2";
            }

            else
                cout << "1";
        }
        cout << endl;
    }

    return 0;
}