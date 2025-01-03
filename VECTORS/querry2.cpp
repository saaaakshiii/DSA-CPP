#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "Enter size: " << endl;
    cin >> n;

    vector<int> v(n + 1, 0);

    cout << "Enter elements: " << endl;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    // calculating prefix-sum array
    for (int i = 1; i <= n; i++)
    {
        v[i] += v[i - 1];
    }

    int q;
    cout << "Enter querries: " << endl;
    cin >> q;

    int ans = 0;

    while (q--)
    {
        int l, r;
        cout << "Enter starting and end range: " << endl;
        cin >> l >> r;

        // ans=prefixsumarray[r]-prefixsumarray[l-r]

        ans = v[r] - v[l - 1];
        cout << "The sum of elements in the range " << l << " to " << r << " is: " << ans << endl;
    }

    return 0;
}