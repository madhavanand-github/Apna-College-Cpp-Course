#include<bits/stdc++.h>
using namespace std;

// NSER - next smallest to right
vector<int> nser(vector<int> nums){

	int n = nums.size();
	vector<int> ans(n);
	stack<int> st;

	for(int i = n-1; i >= 0; i--){
		while(!st.empty() && st.top() > nums[i]) st.pop();
		if(st.empty()) ans[i] = -1;
		else ans[i] = st.top();
		st.push(nums[i]);
	}

	return ans;

}

// NSEL - next smallest to left
vector<int> nsel(vector<int> nums){

	int n = nums.size();
	vector<int> ans(n);
	stack<int> st;

	for(int i = 0; i < n;  i++){
		while(!st.empty() && st.top() > nums[i]) st.pop();
		if(st.empty()) ans[i] = -1;
		else ans[i] = st.top();
		st.push(nums[i]);
	}

	return ans;
}

int main() {
	
	vector<int> arr = {4, 1, 5, 9, 2};

	// nsel
	vector<int> ans = nsel(arr);
	for(auto e : ans) cout << e << " ";
	
	// line break
	cout << endl;

	// nser
	arr = {2, 4, 6, 1, 3, 9, 7};
	ans = nser(arr);
	for(auto e : ans) cout << e << " ";
	
	return 0;
}