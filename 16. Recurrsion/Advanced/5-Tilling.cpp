#include<bits/stdc++.h>
using namespace std;

int tilingWays(int n){

	// Base Case
	if(n == 0) return 0;
	if(n == 1 || n == 2) return n;

	// Recursive Case
	return tilingWays(n-1) + tilingWays(n-2);
}

int main() {
	
	cout << tilingWays(2) << endl;
	
	return 0;
}