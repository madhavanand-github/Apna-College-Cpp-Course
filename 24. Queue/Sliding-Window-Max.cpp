#include<bits/stdc++.h>
using namespace std;

vector<int> bruteForce(int A[], int n, int k){

	if(k>n) k = n;

	vector<int> ans(n-k+1, 0);
	for(int i = 0; i < n-k+1; i++){
		int maxi = INT_MIN;
		for(int j = i; j < i + k; j++)
		maxi = max(maxi, A[j]);
		ans[i] = maxi;
	}

	return ans;
}

int main() {
	
	int A[] = {1,3,-1,-3,5,3,6,7};
	int k = 3;
	int n = 8;
	vector<int> ans = bruteForce(A, n, k);
	for(auto e : ans)
		cout << e << " ";	

	cout << endl;

	int B[] = {1,-1};
	k = 3;
	n = 2;
	ans = bruteForce(B, n, k);
	for(auto e : ans)
		cout << e << " ";

	

	return 0;
}