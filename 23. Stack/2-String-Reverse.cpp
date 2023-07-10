#include<bits/stdc++.h>
using namespace std;

string revUsingStack(string s){

	stack<char> st;
	string ans = "";
	for(auto c:s) st.push(c);
	while(!st.empty()) ans += st.top(), st.pop();
	return ans;
}

string revUsingCallStack(string s){

	// yet to be done
	
}

int main() {
	
	string s = "1234";
	cout << revUsingStack(s);
	// cout << revUsingCallStack(s);
	
	return 0;
}