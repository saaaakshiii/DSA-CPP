#include <iostream>
#include <vector>

using namespace std;

void runningSum(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        v[i] += v[i - 1];
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

    runningSum(v);

    cout << "The running sum array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}