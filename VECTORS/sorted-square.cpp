#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

void sorted_square(vector<int> &v)
{
    int left_ptr = 0;
    int right_ptr = v.size() - 1;

    vector<int> ans;

    while (left_ptr <= right_ptr)
    {
        if (abs(v[left_ptr]) < abs(v[right_ptr]))
        {
            ans.push_back(v[right_ptr] * v[right_ptr]);
            right_ptr--;
        }

        else
        {
            ans.push_back(v[left_ptr] * v[left_ptr]);
            left_ptr++;
        }
    }

    reverse(ans.begin(), ans.end());

    cout << "The sorted array is: " << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
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

    sorted_square(v);

    return 0;
}