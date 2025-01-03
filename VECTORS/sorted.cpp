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

    bool flag = true;

    for (int i = 1; i < n; i++)
    {
        if (v[i] <= v[i - 1])
        {
            flag = false;
        }
    }

    cout << flag << endl;

    return 0;
}