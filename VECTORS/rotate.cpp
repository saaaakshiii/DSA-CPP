#include <iostream>
#include <vector>
#include <algorithm>

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

    int k;
    cout << "Enter steps: " << endl;
    cin >> k;

    k %= n;

    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin() + k);
    reverse(v.begin() + k, v.end());

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}