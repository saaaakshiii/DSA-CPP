#include <iostream>

using namespace std;

int main()
{
    char alphabet;
    cout << "Enter any alphabet: " << endl;
    cin >> alphabet;

    switch (alphabet)
    {
    case 'a':
        cout << "It is a vowel" << endl;
        break;

    case 'e':
        cout << "It is a vowel" << endl;
        break;

    case 'i':
        cout << "It is a vowel" << endl;
        break;

    case 'o':
        cout << "It is a vowel" << endl;
        break;

    case 'u':
        cout << "It is a vowel" << endl;
        break;
    default:
        cout << "A consonant" << endl;
        break;
    }
    return 0;
}