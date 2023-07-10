#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str){
	
	int n = str.length();
	for (int i = 0; i < n/2; i++)
		if(str[i] != str[n-i-1]) return false;
	return true;
}

vector<bool> pal(vector<int> A, int k){
	
	vector<bool> ans;
	int n = A.size();
	string win = "";

	for(int i = 0; i < k; i++){
		win += to_string(A[i]);
	}

	ans.push_back(isPalindrome(win));

	for (int i = k; i < n; i++)
	{
		win += to_string(A[i]);
		win.erase(0, to_string(A[i-k]).length());
		ans.push_back(isPalindrome(win));
	}
	
	return ans;
}

int main() {
	
	
	vector<int> arr = {28, 2, 3, 6, 496, 99, 8888, 99};
	arr = {2, 3, 5, 1, 1, 5};
	vector<bool> ans = pal(arr, 4);
	for(auto a : ans) cout << a << " ";
	
	return 0;
}