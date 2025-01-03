#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<string> q;

    q.push("Sakshi");
    q.push("Singh");
    q.push("Gautam");

    cout << "Size before pop: " << q.size() << endl;
    cout << "First element: " << q.front() << endl;

    q.pop();

    cout << "First element after pop: " << q.front() << endl;

    cout << "Size after pop: " << q.size() << endl;
    return 0;
}