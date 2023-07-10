#include<bits/stdc++.h>
using namespace std;

// Brute Force, O(n*k)
vector<int> brute(vector<int> &A, int k){

	vector<int> ans;
	int n = A.size();
	
	for (int i = 0; i < (n-k+1); i++)
	{
		int sum = 0;
		for(int j = i; j < i+k; j++){
			sum += A[j];
		}
	
		ans.push_back(sum);
	}
	
	return ans;
}

// Optimized, O(n)
vector<int> opt1(vector<int> &A, int k){

	vector<int> ans;
	int n = A.size();
	int wsum = 0;

	for(int i = 0; i < k; i++)
		wsum += A[i];
	
	ans.push_back(wsum);
	for(int j = k; j < n; j++) {
		wsum += A[j] - A[j-k];
		ans.push_back(wsum);
	}

	return ans;
}

int main() {
	
	vector<int> A = {7, 5, 4, 6, 8, 9};
	vector<int> ans = brute(A, 3);
	for(auto num : ans) cout << num << " ";
	cout << endl;
	ans = opt1(A, 3);
	for(auto num : ans) cout << num << " ";
	
	return 0;
}