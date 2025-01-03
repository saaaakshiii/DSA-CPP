#include <iostream>

using namespace std;

int main()
{
    int num1 = 5;
    cout << (num1 << 1) << endl;//10=1010
    cout << (num1 >> 1) << endl;//2=10

    int num2 = 8;

    cout << (num1 | num2) << endl;//1101=13
    cout << (num1 & num2) << endl;//0000=1
    cout << (num1 ^ num2) << endl;//1101=13

    return 0;
}