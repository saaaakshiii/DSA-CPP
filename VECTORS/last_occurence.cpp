#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "Enter vector size: " << endl;
    cin >> n;

    vector<int> v(n);

    cout << "Enter elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int x;

    cout << "Enter the element you want last occurence of: " << endl;
    cin >> x;

    int idx = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     if (v[i] == x)
    //     {
    //         idx = i + 1;
    //     }
    // }

    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] == x)
        {
            idx = i + 1; // better solution
            break;
        }
    }

    cout << x << " last occurence is: " << idx << endl;
    return 0;
}