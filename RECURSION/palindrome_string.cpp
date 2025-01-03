#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string &str, int start, int end)
{
    if (start >= end)
        return true;

    return ((str[start] == str[end]) && isPalindrome(str, start + 1, end - 1));
}

int main()
{
    string s;
    cout << "Enter any string: " << endl;
    cin >> s;

    int n = s.length();

    cout << isPalindrome(s, 0, n-1);

    return 0;
}