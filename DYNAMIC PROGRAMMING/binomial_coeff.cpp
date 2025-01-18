#include<bits/stdc++.h>
#define NIL -1
#define MAX 100

int lookup[MAX];

void initialize(){
    for (int i = 0; i < MAX; i++)
    {
        lookup[i]=NIL;
    }
}
using namespace std;

// Returns value of Binomial Coefficient C(n, k)
// int binomialCoeff(int n, int k)
// {
//     int C[n+1][k+1];

//     // Caculate value of Binomial Coefficient in bottom up manner
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 0; j <= min(i, k); j++)
//         {
//             // Base Cases
//             if (j == 0 || j == i)
//                 C[i][j] = 1;

//             // Calculate value using previously stored values
//             else
//                 C[i][j] = C[i-1][j-1] + C[i-1][j];
//         }
//     }
//     return C[n][k];
// }

//Using memoization- Top down approach
int getnCk(int n, int k, vector<vector<int>> &memo) {
  
    // k can not be grater then k so we
      // return 0 here
    if (k > n)
        return 0;
  
      // base condition when k and n are 
      // equal or k = 0
    if (k == 0 || k == n)
        return 1;
    
      // Check if pair n and k is already 
      // calculated then return it from here
      if(memo[n][k] != -1) return memo[n][k];
  
    // Recurvie add the value and store to memorize table
    return memo[n][k] = getnCk(n - 1, k - 1, memo) 
                          + getnCk(n - 1, k, memo);
}
int binomialCoeff(int n, int k) {
      
      // Create table for memorization
    vector<vector<int>> memo(n + 1, vector<int> (k + 1, -1));
  
      return getnCk(n, k, memo);
}

int main()
{
    int c=5, k=2;
    cout<<binomialCoeff(c, k)<<endl;

    return 0;
}