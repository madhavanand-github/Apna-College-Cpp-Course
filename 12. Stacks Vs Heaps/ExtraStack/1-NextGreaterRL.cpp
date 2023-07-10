#include<bits/stdc++.h>
using namespace std;

// NGER - next greater to right
vector<int> nger(vector<int> nums){

	int n = nums.size();
	vector<int> ans(n);
	stack<int> st;

	for(int i = n-1; i >= 0; i--){
		while(!st.empty() && st.top() < nums[i]) st.pop();
		if(st.empty()) ans[i] = -1;
		else ans[i] = st.top();
		st.push(nums[i]);
	}

	return ans;

}

// NGEL - next greater to left
vector<int> ngel(vector<int> nums){

	int n = nums.size();
	vector<int> ans(n);
	stack<int> st;

	for(int i = 0; i < n;  i++){
		while(!st.empty() && st.top() < nums[i]) st.pop();
		if(st.empty()) ans[i] = -1;
		else ans[i] = st.top();
		st.push(nums[i]);
	}

	return ans;
}

int main() {
	
	vector<int> arr = {4, 3, 9, 5, 6, 2, 7};

	// ngel
	vector<int> ans = ngel(arr);
	for(auto e : ans) cout << e << " ";
	
	// line break
	cout << endl;

	// nger
	arr = {4, 5, 7, 8, 2, 6};
	ans = nger(arr);
	for(auto e : ans) cout << e << " ";
	
	return 0;
}