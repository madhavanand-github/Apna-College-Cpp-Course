#include<bits/stdc++.h>
using namespace std;

// Brute Force
int brute(vector<int> &A, int s){
	
	int n = A.size();
	int len = INT_MAX;

	for (int ws = 0; ws < n; ws++)
	{
		int sum = 0;
		int we = ws;
		while(sum < s && we < n){
			sum += A[we];
			we++;
		}
		if(sum > s) len = min(len, we-ws);
	}
	
	return len;
}

// Optimized
int opt(vector<int> A, int s){

	int ws = 0;
	int we = 0;
	int wsum = 0;
	int len = INT_MAX;
	int n = A.size();

	for (ws = 0; ws < n; ws++)
	{
		if(wsum < s)
		while(wsum < s && we < n){
			wsum += A[we];
			we++;
		}
		else
		while(wsum > s && we >= ws){
			wsum -= A[we];
			we--;
		}
		if(wsum > s) len = min(len, we-ws);
	}

	return len;
}

int main() {
	
	vector<int> arr = {1, 4, 45, 6, 10, 19};
	cout << brute(arr, 51) << endl;
	cout << opt(arr, 51) << endl;
	
	return 0;
}