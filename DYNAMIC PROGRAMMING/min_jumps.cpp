#include<bits/stdc++.h>

using namespace std;

int minJumps(int arr[], int n) 
{ 
    // jumps[n-1] will hold the result
    int jumps[n]; 
    if (n == 0 || arr[0] == 0) 
        return INT_MAX; 
 
    jumps[0] = 0;
 
    // Find the minimum number of jumps to reach arr[i] 
    // from arr[0], and assign this value to jumps[i] 
    for (int i = 1; i < n; i++) 
    { 
        jumps[i] = INT_MAX;
        for (int j = 0; j < i; j++) 
        { 
            if (i <= j + arr[j] && jumps[j] != INT_MAX) 
            { 
                jumps[i] = min(jumps[i], jumps[j] + 1);
                break;
            } 
        } 
    } 
    return jumps[n-1];
} 

int main(){
    int arr[]={1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int n=11;

    cout<<minJumps(arr, n);

    return 0;
}
