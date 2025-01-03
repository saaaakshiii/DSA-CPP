#include <iostream>
#include <array>

using namespace std;

int main()
{
    int basic[] = {1, 2, 3}; // normal aarray

    array<int, 4> a = {1, 2, 3, 4}; // stl array

    int size = a.size();

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    cout << "\nElement at 2nd position " << a.at(1) << endl;
    cout << "Array empty or not? " << a.empty() << endl;

    cout << "First element: " << a.front() << endl;
    cout << "Last element: " << a.back() << endl;

    return 0;
}