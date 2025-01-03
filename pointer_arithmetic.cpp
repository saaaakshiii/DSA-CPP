#include <iostream>

using namespace std;

int main()
{
    // int x = 20;
    // int *ptr = &x;

    // cout << ptr << endl
    //      << ptr - 1 << endl;

    // int x = 20;
    // int *ptr = &x;

    // cout << ptr << endl;

    // ptr = ptr + 1;

    // cout << ptr << endl;

    // ptr += 2;

    // cout << ptr << endl;

    int arr[] = {7, 2, 5, 6, 9, 4};

    int *ptr = &arr[0];

    cout << ptr << " " << *ptr << endl;

    // cout << *++ptr << endl; // pointer dereferenced first and then incremented; thus, pointing to the next value

    // cout << arr[0] << " " << arr[1] << endl;
    // cout << ptr << " " << *ptr << endl;

    // cout << ++(*ptr) << endl /* *ptr is enclosed in parenthesis so first the value inside parenthesis will be evaluated
    //                                     and it will inc or dec the original value present at that location*/
    //      << *ptr << endl;
    // cout << arr[0] << " " << arr[1] << endl;

    // cout << ++(*ptr) << endl; /*right to left operation- thus, the pointer is derfenced first and
    //                             then the dereferenced value gets incremented  (original value of array is affected)*/

    // cout << arr << " " << *arr << endl
    //      << arr + 1 << " " << *(arr + 1) << endl; // arr poinetr dereferenced

    for (int i = 0; i < 6; i++)
    {
        cout << *(arr + i) << " "; // accessing array elements through pointers
    }

    return 0;
}