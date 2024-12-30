#include<bits/stdc++.h>

using namespace std;

// Given a string s of lowercase alphabets. 
// The task is to find the maximum occurring character in the string s.
// If more than one character occurs the maximum number of times then print the lexicographically smaller character.

char mostFre(string &str){
    vector<int> frq(26, 0); //vector of size 26 initialized with 0

    for(char c:str)
        frq[c-'a']++;

    char maxChar='a';
    int maxFreq=0;

    for(int i=0; i<26; i++){

        //if frequency of the curr char is greater than the max frequency
        //or frequency is equal but it is a lexicographically smaller char

        if(frq[i]>maxFreq||frq[i]==maxFreq && i+'a'<maxChar){
            maxFreq=frq[i];
            maxChar=i+'a';
        }
    }

    return maxChar;
}

int main(){
    string str="testsample";

    cout<<mostFre(str);

    return 0;
}

