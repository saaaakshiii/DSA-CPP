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

    const int N = 1e5 + 10; // 10^5 as all the elements are smaller than 10^5
    vector<int> freq(N, 0); // all vector elements are initialised by 0

    for (int i = 0; i < n; i++)
    {
        freq[v[i]]++; // if an element is present its position will be incremented by 1
    }

    int q;
    cout << "Enter number of querries: " << endl;
    cin >> q;

    cout << "Enter querry elements: " << endl;

    while (q--)
    {
        int querryele;
        cin >> querryele;

        if (freq[querryele] == 1)
        {
            cout << endl
                 << querryele << " is present at " << " position" << endl;
        }

        else
        {
            cout << endl
                 << querryele << " is not present " << endl;
        }
    }

    return 0;
}