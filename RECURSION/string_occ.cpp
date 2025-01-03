#include <iostream>
#include <cstring>

using namespace std;

string f(string &s, int idx, int n)
{
    // base case

    if (idx == n)
    {
        return "";
    }

    string curr = "";
    curr += s[idx];

    return ((s[idx] == 'a') ? "" : curr) + f(s, idx + 1, n);
}

int main()
{
    string s = "absbdba";
    string g = f(s, 0, 7);

    cout << g << endl;

    return 0;
}