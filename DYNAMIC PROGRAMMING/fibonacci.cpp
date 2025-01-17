//Using memoization

/* C++ program for Memoized version
   for nth Fibonacci number */
// #include <bits/stdc++.h>
// using namespace std;

// #define NIL -1 
// #define MAX 100 

// int lookup[MAX]; 

// /* Function to initialize NIL 
//    values in lookup table */
// void _initialize() 
// { 
//     int i; 
//     for (i = 0; i < MAX; i++) 
//         lookup[i] = NIL; 
// } 

// /* Function for nth Fibonacci number */
// int fib(int n) 
// { 
//     if (lookup[n] == NIL) 
//     { 
//         if (n <= 1) 
//             lookup[n] = n; 
//         else
//             lookup[n] = fib(n - 1) + fib(n - 2); 
//     } 

//     return lookup[n]; 
// } 

// // Driver code
// int main () 
// { 
//     int n = 40; 
//     _initialize(); 
//     cout << "Fibonacci number is " << fib(n); 
//     return 0; 
// }

//Using tabulation

/* C++ program for Tabulated version */

#include<bits/stdc++.h>

int fib(int n)
{
    int f[n+1];
    int i;
    f[0] = 0;   f[1] = 1; 
    
    for (i = 2; i <= n; i++)
        f[i] = f[i-1] + f[i-2];

    return f[n];
}
 
// Driver Code
int main ()
{
    int n = 9;
    printf("Fibonacci number is %d ", fib(n));
    return 0;
}