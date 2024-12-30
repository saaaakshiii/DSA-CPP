// C++ program to check if two strings
// are anagrams of each other
//anagrams are two strings of equal length having same letters and the order might differ

#include <bits/stdc++.h>
using namespace std;

/* function to check whether two strings are anagram of
each other */
bool areAnagram(char* str1, char* str2)
{
    int count1[26]={0};
    int count2[26]={0};

    int i;
    for(i=0; str1[i]&&str2[i]; i++){
        count1[str1[i]]++;
        count2[str2[i]]++;
    }

    if(str1[i]||str2[i])
        return false;
    
    for(int i=0; i<26; i++){
        if(count1[i]!=count2[i])
            return false;
    }
    return true;
}

/* Driver code*/
int main()
{
    char str1[] = "geeksforgeeks";
    char str2[] = "forgeeksgeeks";
  
    // Function Call
    if (areAnagram(str1, str2))
        cout << "The two strings are anagram of each other";
    else
        cout << "The two strings are not anagram of each "
                "other";

    return 0;
}

// This is code is contributed by rathbhupendra