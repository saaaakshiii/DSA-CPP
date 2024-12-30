#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str) {

    //Mehtod 1

    // string::iterator begin = str.begin();
    // string::iterator end = str.end() - 1;
    // while (begin < end) {
    //     if (*begin != *end) {
    //         return false;
    //     }
    //     begin++;
    //     end--;
    // }
    // return true;

    //Mehtod 2

    for (int i = 0; i < str.length(); i++) {
        if(str[i] != str[str.length() - i - 1])
            return false;
    }
    return true;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    if (isPalindrome(str)) {
        cout << str << " is a palindrome" << endl;
    } else {
        cout << str << " is not a palindrome" << endl;
    }
    return 0;
}