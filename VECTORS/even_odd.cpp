#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "Enter size: " << endl;
    cin >> n;

    vector<int> v(n);

    cout << "Enter elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // int even = 0;
    // int odd = 0;
    // int diff = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         even += v[i];
    //     }

    //     else
    //     {
    //         odd += v[i];
    //     }
    // }

    // diff = even - odd;

    // cout << "The result is: " << diff << endl;

    int anssum = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            anssum += v[i];
        }

        else
        {
            anssum -= v[i];
        }
    }

    cout << "The result is: " << anssum << endl;

    return 0;
}