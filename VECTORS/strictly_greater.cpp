#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "enter size: " << endl;
    cin >> n;

    vector<int> v(n);
    cout << "Enter elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int x;
    cout << "Enter a number" << endl;
    cin >> x;

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] > x)
        {
            ans++;
        }
    }

    cout << "Numbers strictly greater than " << x << " are: " << ans;

    return 0;
}