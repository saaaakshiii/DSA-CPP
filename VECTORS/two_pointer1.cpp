#include <iostream>
#include <vector>

using namespace std;

void sort_zeroes_and_ones(vector<int> &v)
{
    int left_ptr = 0;
    int right_ptr = v.size() - 1;

    while (left_ptr < right_ptr)
    {
        if (v[left_ptr] == 1 && v[right_ptr] == 0)
        {
            v[left_ptr++] = 0;
            v[right_ptr--] = 1;
        }

        if (v[left_ptr] == 0)
        {
            left_ptr++;
        }

        if (v[right_ptr] == 1)
        {
            right_ptr--;
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