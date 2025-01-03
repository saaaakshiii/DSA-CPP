#include <iostream>
#include <vector>

using namespace std;

void f(int *arr, int i, int n, int sum, vector<int> &result)
{
    // Base Case

    if (i == n)
    {
        result.push_back(sum);
        return;
    }

    f(arr, i + 1, n, sum + arr[i], result); // pick the ith element
    f(arr, i + 1, n, sum, result);          // donot pick the ith element
}

int main()
{
    int arr[] = {2, 3, 4};

    vector<int> result;

    int n = 3;
    f(arr, 0, n, 0, result);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}