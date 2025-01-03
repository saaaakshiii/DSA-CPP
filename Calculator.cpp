#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;

    char op;
    cout << "Enter any operator: " << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "The sum is: " << endl
             << (a + b) << endl;
        break;

    case '-':
        cout << "The difference is: " << endl
             << (a - b) << endl;
        break;

    case '*':
        cout << "The product is: " << endl
             << (a * b) << endl;
        break;

    case '/':
        cout << "The quotient is: " << endl
             << (a / b) << endl;
        break;

    case '%':
        cout << "The remainder is: " << endl
             << (a % b) << endl;
        break;

    default:
        cout << "Wrong operator choosen" << endl;
        break;
    }
    return 0;
}