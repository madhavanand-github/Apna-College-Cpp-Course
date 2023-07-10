#include<bits/stdc++.h>
using namespace std;

int maxi(vector<int> A, int k, int s){

	int n = A.size();
	int wsum = 0;
	int mx = INT_MIN;

	for(int i = 0; i < k; i++)
		wsum += A[i];
	
	if(wsum < s) mx = max(mx, wsum);

	for(int i = k; i < n; i++){
		wsum += A[i] - A[i-k];
		if(wsum < s) mx = max(mx, wsum);
	}
	return mx;
}

int main() {
	
	vector<int> arr = {7, 5, 4, 6, 8, 9};
	cout << maxi(arr, 3, 20);
	
	return 0;
}