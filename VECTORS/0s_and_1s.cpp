#include <iostream>
#include <vector>

using namespace std;

void sort_zeroes_and_ones(vector<int> &v)
{
    int zeroes_count = 0; // variable for counting the number of zeroes present

    for (int ele : v)
    {
        if (ele == 0)
        {
            zeroes_count++; // will tell the number of 0s present in the array
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (i < zeroes_count)
        {
            v[i] = 0; // 0s will come at the beginning
        }
        else
        {
            v[i] = 1; // 1s will come at the endw
        }
    }
}

int main()
{
    int n;
    cout << "enter size: " << endl;
    cin >> n;

    vector<int> v(n);

    cout << "Enter elements (0s and 1s): " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort_zeroes_and_ones(v);

    cout << "The sorted array is: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}