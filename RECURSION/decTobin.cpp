#include <iostream>

using namespace std;

void fun(int n)
{
    if (n == 0)
        return;
    fun(n / 2);
    cout << n % 2;
}

int main()
{
    int num;
    cout << "Enter any number: " << endl;
    cin >> num;

    cout << "The decimal to binary conversion of " << num << " is: " << endl;
    fun(num);

    return 0;
}