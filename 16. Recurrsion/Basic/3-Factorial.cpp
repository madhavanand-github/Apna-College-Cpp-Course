#include<bits/stdc++.h>
using namespace std;

int fact(int n){

	// Base Case
	if(n == 0) return 1;
	if(n < 0 ) return -1;

	// Recursive Case
	return n * fact(n-1);
}

int main() {
	
	cout << fact(10) << endl;
	
	return 0;
}