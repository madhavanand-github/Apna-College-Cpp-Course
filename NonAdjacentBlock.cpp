#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n; cin >> n;
	string s; cin >> s;

	stack<char> st;
	st.push(s[0]);

	for (int i = 1; i < n; i++)
		if(!st.empty() && st.top() == s[i]) st.pop();
		else st.push(s[i]);
	
	if(!st.empty()){
		s = "";
		while(!st.empty()){
			s = st.top() + s;
			st.pop();
		} 
		cout << s;
	} else cout << "NO BLOCK";
	
	return 0;
}