// Given an expression string exp, write a program to examine whether the pairs and the orders of
// “{“, “}”, “(“, “)”, “[“, “]” are correct in the given expression.

#include <bits/stdc++.h>

using namespace std;

bool isBalanced(string &expr)
{
    stack<char> temp;
    for (int i = 0; i < expr.length(); i++)
    {
        if (temp.empty())
        {

            // If the stack is empty
            // just push the current bracket
            temp.push(expr[i]);
        }
        else if ((temp.top() == '(' && expr[i] == ')') || (temp.top() == '{' && expr[i] == '}') || (temp.top() == '[' && expr[i] == ']'))
        {

            // If we found any complete pair of bracket
            // then pop
            temp.pop();
        }
        else
        {
            temp.push(expr[i]);
        }
    }
    if (temp.empty())
    {

        // If stack is empty return true
        return true;
    }
    return false;

    
}

int main()
{
    string s;
    cin >> s;

    cout << isBalanced(s);

    return 0;
}