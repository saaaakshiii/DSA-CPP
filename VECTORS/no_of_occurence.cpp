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

    int x;
    cout << "Enter the element you want number of occurences of: " << endl;
    cin >> x;

    int occ = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == x)
        {
            occ++;
        }
    }

    cout << "The number of occurences of " << x << " are: " << occ << endl;

    return 0;
}