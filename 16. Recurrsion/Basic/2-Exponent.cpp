#include<bits/stdc++.h>
using namespace std;

int raise(int n, int p){

	// Base Case
	if(p==0) return 1;

	// Recursive Case
	return n * raise(n, p-1);
}

// Handles Negative Power as well
float raiseV2(float n, int p){

	if(p == 0) return 1;

	if(p < 0) return 1/n * raiseV2(n, p + 1);

	if(p > 0) return n * raiseV2(n, p - 1);
}

// Handles Negative Power even if int is passed
float raiseV2(int n, int p){

	if(p == 0) return 1;

	if(p < 0) return 1.0/n * raiseV2(n, p + 1);

	if(p > 0) return n * raiseV2(n, p - 1);
}

int main() {
	
	cout << raiseV2(2, -2) << endl;
	
	return 0;
}