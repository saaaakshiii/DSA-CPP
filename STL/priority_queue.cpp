#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int> maxi; // max heap is created; the element fetched will be the greatest of all the elements present in heap/queue

    priority_queue<int, vector<int>, greater<int>> mini; // min-heap created

    maxi.push(1);
    maxi.push(34);
    maxi.push(11);
    maxi.push(21);

    cout << "Size: " << maxi.size() << endl;

    int n = maxi.size();

    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    mini.push(23);
    mini.push(21);
    mini.push(12);
    mini.push(5);

    int m = mini.size();

    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    cout << "empty or not? " << mini.empty() << endl;

    return 0;
}