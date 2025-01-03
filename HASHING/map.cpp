// C++ program to demonstrate functionality of unordered_map

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    // Declaring umap to be of <string, int> type
    // key will be of string type and mapped value will
    // be of double type
    unordered_map<string, int> umap;

    // inserting values by using [] operator
    umap["GeeksforGeeks"] = 10;
    umap["Practice"] = 20;
    umap["Contribute"] = 30;

    // Traversing an unordered map
    for (auto x : umap)
        cout << x.first << " " << x.second << endl;

    // Searching for the key "Practice"
    if (umap.find("Practice") != umap.end())
        cout << "The key Practice Found!\n";
    else
        cout << "The key Practice Not Found!\n";

    // Accessing key value pair returned by find()
    auto it = umap.find("Practice");
    if (it != umap.end())
        cout << "Key is: " << it->first << ", "
             << "Value is: " << it->second;

    if (umap.count("Practice") > 0)
        cout << "The key Practice Found!\n";
    else
        cout << "The key Practice Not Found!\n";

    // Printing size of the map before erasing
    cout << "Size before erasing: " << umap.size() << "\n";

    // Erase the key "Practice"
    umap.erase("Practice");

    // Printing size after erasing an element
    cout << "Size after erasing: " << umap.size() << "\n";

    // Erasing a range
    umap.erase(umap.begin(), umap.end());

    // Size after erasing all elements
    cout << "Size after erasing all elements: "
         << umap.size();
}
