#include<bits/stdc++.h>
using namespace std;

int fib(int n, vector<int> &A){
	if(A[n] != -1) return A[n];
	if(n <= 2 ) return 1;
	return A[n] =  fib(n-1, A) + fib(n-2, A);
}

int main() {
	
	int n; cin >> n;
	vector<int> A(n+1,-1);

	cout << fib(n, A) << endl;
	
	return 0;
}