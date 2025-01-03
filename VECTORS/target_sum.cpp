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

    int target;
    cout << "Enter target sum: " << endl;
    cin >> target;

    int pairs = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] + v[j] == target)
            {
                pairs++;
            }
        }
    }

    cout << "The number of pairs are: " << pairs << endl;

    return 0;
}