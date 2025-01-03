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

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] == v[j])
            {
                v[i] = v[j] = -1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] > 0)
        {
            cout << "The unique element is: " << v[i] << endl;
        }
    }

    return 0;
}