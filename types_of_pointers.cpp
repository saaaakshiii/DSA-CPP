#include <iostream>

using namespace std;

int main()
{
    // wild pointer

    // int *ptr;
    // cout << *ptr << endl;

    // Null pointer

    // int *ptr = NULL;
    // cout << ptr << endl;

    // Dangling pointer

    // int *ptr = NULL;

    // {
    //     int x = 10;
    //     ptr = &x;
    // }

    // cout << ptr << endl; // dnagling pointer as it is pointing to x which does not exist

    // Void pointer

    int f = 4.5;
    int x = 5;
    void *ptr = &f;
    ptr = &x;
    int *int_pointer = (int *)ptr;

    cout << *int_pointer << endl;

    return 0;
}