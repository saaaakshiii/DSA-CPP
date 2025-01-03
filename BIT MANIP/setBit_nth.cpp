#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter any number: " << endl;
    cin >> n;

    int k;
    cout << "Enter the number of bit you want to set: " << endl;
    cin >> k;

    cout << "Result: " << (n = n | (1 << (k - 1)));

    return 0;
}