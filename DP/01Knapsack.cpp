#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> dp(5, vector<int>(11,-1));

// Recursive
int maxProfitRecursive(int W[], int P[], int C, int N){

	if(!N || !C) return 0;

	if(W[N-1]>C) return maxProfitRecursive(W, P, C, N-1);

	return max(P[N-1] + maxProfitRecursive(W, P, C-W[N-1], N-1), maxProfitRecursive(W, P, C, N-1));

}

// Top-Down DP
int maxProfitTopDown(int W[], int P[], int C, int N){


	if(!N || !C) return dp[N][C] = 0;
	if(dp[N][C] != -1) return dp[N][C];

	if(W[N-1]>C) return maxProfitTopDown(W, P, C, N-1);

	return max(P[N-1] + maxProfitTopDown(W, P, C-W[N-1], N-1), maxProfitTopDown(W, P, C, N-1));

}



int main() {
	
	int W[] = {3, 4, 6, 5};
	int P[] = {2, 3, 1, 4};
	int C = 10;
	int N = 4;
	cout << maxProfitRecursive(W, P, C , N) << endl;
	cout << maxProfitTopDown(W, P, C, N) << endl;
	cout << dp[0][1];
	
	return 0;
}