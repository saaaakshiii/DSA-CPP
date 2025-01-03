#include <iostream>
#include <vector>

using namespace std;

void partition(vector<int> &v)
{
    int total_sum = 0;
    int prefix_sum = 0;

    int ans = -1;

    for (int i = 0; i < v.size(); i++)
    {
        total_sum += v[i];
    }

    for (int i = 0; i < v.size(); i++)
    {
        prefix_sum += v[i];
        int suffix_sum = total_sum - prefix_sum;

        if (suffix_sum == prefix_sum)
        {
            cout << "The partition exists" << endl;
            ans = 1;
        }
    }
    if (ans == -1)
    {
        cout << "The partition does not exist" << endl;
    }
}

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

    partition(v);

    return 0;
}