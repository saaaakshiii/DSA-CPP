#include <iostream>

using namespace std;

bool isPrime(int num)
{
    bool ans = true;
    int i = 2;

    if (num == 1 || num == 0)
        ans = true;

    while (i * i <= num)
    {
        if (num % i == 0)
        {
            ans = false;
            break;
        }
        i++;
    }
    return ans;
}

int main()
{
    int num;
    cout << "Enter any number: " << endl;
    cin >> num;

    bool res = isPrime(num);
    if (res == true)
    {
        cout << "The number is prime";
    }
    else
        cout << "Number isn't prime :(" << endl;

    return 0;
}