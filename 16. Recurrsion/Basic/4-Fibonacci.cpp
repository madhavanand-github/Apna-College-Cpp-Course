#include<bits/stdc++.h>
using namespace std;

int fib(int n){
	
	// Base Case
	if(n == 0 || n == 1) return n;
	if(n < 0 ) return -1;

	// Recursive Case
	return fib(n-1) + fib(n-2);
}

int main() {
	
	cout << fib(5) << endl;
	
	return 0;
}