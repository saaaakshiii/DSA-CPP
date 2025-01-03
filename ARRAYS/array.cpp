#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4};

    cout << sizeof(arr) << endl;
    cout << sizeof(arr) / sizeof(arr[0]) << endl;

    // for (int ele : arr)
    // {
    //     cout << ele << endl; //will traverse through each and every element of array
    // }

    char vowels[5];

    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> vowels[i];
    // }

    for (char &ele : vowels)
    {
        cin >> &ele;// passing var through reference
    }

    for (int i = 0; i < 5; i++)
    {
        cout << vowels[i] << " ";
    }

    return 0;
}