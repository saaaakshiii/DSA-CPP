// A subsequence of a string can be made by picking 0 or
// more characters from the string and these characters should be
// in the same order as they appear in the string
// No of subsequences of string of length n= 2^n

#include <iostream>
#include <string.h>
using namespace std;

// The table is 2-D because the state of each subproblem depends on two variables:
// m: Length of the prefix of string X.
// n: Length of the prefix of string Y.

int memo[1000][1000];

int lcs(string s1, string s2, int n, int m)
{
    if(memo[n][m]!=-1)
        return memo[n][m];
        
    if(n==0 || m==0)
        memo[n][m]=0;
        
    else
    {
        if(s1[n-1]==s2[m-1])
            memo[n][m] = 1 + lcs(s1,s2,n-1,m-1);
        else
            memo[n][m] = max(lcs(s1,s2,n-1,m),lcs(s1,s2,n,m-1));
    }
    
    return memo[n][m];
    
}

int main() {
	
	
	string s1="AXYZ", s2="BAZ";
	
	int n = 4, m = 3;
	
	memset(memo,-1,sizeof(memo));
	
	cout<<lcs(s1,s2,n,m);
	
    return 0;
}
