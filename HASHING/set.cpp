// C++ program to illustrate unordered_set

#include <iostream>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_set<int> s;

    // Inserting elements using
    // insert() function
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);

    // Traversing the unordered_set
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;

    cout << "Size of unordered_set: " << s.size() << endl;

    // Clear all elements
    s.clear();

    cout << "Size after clearing unordered_set: "
         << s.size() << endl;

    // Check if 20 is present using
    // find() function
    // If the iterator returned by find() does
    // not points to end() iterator then 20 is
    // present otherwise not
    if (s.find(20) == s.end())
        cout << "20 not found\n";
    else
        cout << "20 found\n";

    // Check if 20 is present using
    // count() function
    if (s.count(20) == 1)
        cout << "20 found\n";
    else
        cout << "20 not found\n";

    // Print size before Erasing
    cout << "Size before erasing: " << s.size() << "\n";

    // Erasing a single element
    s.erase(20);

    // Print size after Erasing
    cout << "Size after erasing: " << s.size() << "\n";

    // Erasing a range
    s.erase(s.begin(), s.end());

    cout << "Size: " << s.size() << endl;

    return 0;
}
