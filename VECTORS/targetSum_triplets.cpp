#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "enter size: " << endl;
    cin >> n;

    vector<int> v(n);

    cout << "Enter elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int target;
    cout << "Enter the target sum: " << endl;
    cin >> target;

    int triplets = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (v[i] + v[j] + v[k] == target)
                {
                    triplets++;
                }
            }
        }
    }

    cout << "The number of triplets are: " << triplets << endl;

    return 0;
}