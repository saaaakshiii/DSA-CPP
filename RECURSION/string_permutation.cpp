#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void permute(string s, int i = 0)
{
    if (i == s.length() - 1)
    {
        cout << s << " ";
        return;
    }

    for (int j = i; j < s.length(); j++)
    {
        swap(s[i], s[j]);
        permute(s, i + 1);
        swap(s[i], s[j]);
    }
}

int main()
{
    string s;
    cin >> s;
    int i = 0;

    permute(s, i);

    return 0;
}