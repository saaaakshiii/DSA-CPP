#include <iostream>
#include <cstring>

using namespace std;

void findFirstLast(string s, int *first, int *last, char ch)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ch)
        {
            *first = i + 1;
            break;
        }
    }

    for (int i = s.size() - 1; i > 0; i--)
    {
        if (s[i] == ch)
        {
            *last = i + 1;
            break;
        }
    }
}

int main()
{
    string s = "aaaabcad";
    char ch = 'a';

    int first = -1;
    int last = -1;

    int *ptrf = &first;
    int *ptrl = &last;

    findFirstLast(s, ptrf, ptrl, ch);

    cout << "First occurence: " << *ptrf << first << endl
         << "Last occurence: " << *ptrl << last << endl;

    return 0;
}