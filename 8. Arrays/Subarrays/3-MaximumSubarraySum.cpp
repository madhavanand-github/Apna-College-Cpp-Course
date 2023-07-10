#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int N = 5;
	int arr[N] = { 1, -4, 3, 2, 1};
	int sum = 0;

	int cum[N+1];
	cum[0] = 0;
	for (int i = 0; i < N; i++)
		cum[i+1] = cum[i] + arr[i];
	
	int maxSum = INT_MIN;
	for (int i = 0; i < N; i++)
		for (int j = i; j < N; j++)
			maxSum = max(maxSum, cum[j+1] - cum[i]);
	
	cout << maxSum;
	return 0;
	
}