#include <iostream>
#include <cstring>

using namespace std;

void printString(string s)
{
    int n = s.length();
    int pSize = 1 << n;

    for (int i = 0; i < pSize; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i & (1 << j)) != 0)
            {
                cout << s[j];
            }
        }
        cout << endl;
    }
}

int main()
{
    string s = "abcd";
    printString(s);

    return 0;
}