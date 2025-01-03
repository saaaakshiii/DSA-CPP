#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Given a rope of length N meters, and the rope can be cut in only 3 sizes A, B and C. 
// The task is to maximizes the number of cuts in rope. 
// If it is impossible to make cut then print the number else print -1.

// Input: N = 17, A = 10, B = 11, C = 3 Output: 3 

int maxPieces(int n, int a, int b, int c)
{
	if (n == 0)
		return 0;
	if (n <= -1)
		return -1;

	int res = max(maxPieces(n - a, a, b, c), max(maxPieces(n - b, a, b, c), maxPieces(n - c, a, b, c)));

	if (res == -1)
		return -1;

	return res + 1;
}

int main()
{
	int n, a, b, c;
	cin >> n >> a >> b >> c;

	int ans = maxPieces(n, a, b, c);
	cout << ans;

	return 0;
}