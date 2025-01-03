#include <iostream>
#include <cstring>

using namespace std;

void reverse(char name[], int n)
{
    int s = 0, e = n - 1;

    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

int lengthOf(char name[])
{
    int count = 0;

    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cin >> name;

    int len = lengthOf(name);

    cout << "Length of " << name << " is: " << len << endl;

    reverse(name, len);

    cout << "The reverse string is: "
         << name;

    return 0;
}