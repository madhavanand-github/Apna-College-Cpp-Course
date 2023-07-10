#include<bits/stdc++.h>
using namespace std;

string rev(string str){

	stack<string> st;
	string word = "";

	for(int i = 0; i <= str.length(); i++)
		if(str[i] == ' ' || str[i] == '\0')
		st.push(word), word = "";
		else word += str[i];

	string ans = "";
	while(!st.empty())
		ans.append(st.top() + " "), st.pop();

	return ans;

}

int main() {
	
	string str = "Hey, how are you doing?";
	cout << rev(str);
	return 0;
}