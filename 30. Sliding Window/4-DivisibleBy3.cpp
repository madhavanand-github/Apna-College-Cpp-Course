#include<bits/stdc++.h>
using namespace std;

int digitSum(int num){
	int sum  = 0;
	while(num){
		sum += num%10;
		num /= 10;
	}
	return sum;
}

vector<bool> div3(vector<int> A, int k){

	int wsum = 0;
	int n = A.size();
	vector<bool> ans(n-k+1, false);

	for(int i = 0; i < k; i++)
		wsum += digitSum(A[i]);

	if(wsum % 3 == 0) ans[0] = true;

	for(int i = k; i < n; i++){
		wsum += digitSum(A[i]) - digitSum(A[i-k]);
		if(wsum % 3 == 0) ans[i-k+1] = true;
	}

	return ans;
}

// Apna College Version 
vector<bool> div32(vector<int> A, int k){
	
	int n = A.size();
	int wsum = 0;
	vector<bool> ans;

	for(int i = 0; i < k; i++)
		wsum += A[i];
	
	if(wsum % 3 == 0) ans.push_back(true);
	else ans.push_back(false);

	for(int i = k; i < n; i++){
		wsum += A[i] - A[i-k];
		if(wsum % 3 == 0) ans.push_back(true);
		else ans.push_back(false);
	}

	return ans;
}

int main() {
	
	vector<int> A = {8, 23, 45, 12, 56, 4};
	vector<bool> ans = div3(A, 3);
	for(auto num : ans) cout << num << " ";
	cout << endl;
	ans = div32(A, 3);
	for(auto num : ans) cout << num << " ";

	return 0;
}