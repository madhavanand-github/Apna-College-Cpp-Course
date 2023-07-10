#include<bits/stdc++.h>
using namespace std;

// Print in increasing order
void print(int n){

	// Base Case
	if(n==0) return;

	// Recursive Case
	cout << n << " ";
	print(n-1);
}

// Print in decreasing order
void printReverse(int n){

	// Base Case
	if(n==0) return;

	// Recursive Case
	print(n-1);
	cout << n << endl;
}

int main() {
	
	print(10);
	cout << endl;
	printReverse(10);
	
	return 0;
}