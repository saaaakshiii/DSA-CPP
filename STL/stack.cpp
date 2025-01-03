#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> s;

    s.push("Sakshi");
    s.push("Singh");
    s.push("Gautam");

    cout << "Top element: " << s.top() << endl; // Gautam will be printed as it is at the top of stack(LIFO)
    s.pop();
    cout << "Top element: " << s.top() << endl;

    cout << "Size of stack: " << s.size() << endl;
    cout << "empty or not? " << s.empty() << endl;

    return 0;
}