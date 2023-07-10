#include<bits/stdc++.h>
using namespace std;

int pre(char c){

	if(c == '^') return 3;
	else if(c == '*' || c== '/') return 2;
	else if(c == '+' || c=='-') return 1;
	return -1;
}

bool isOperator(char c){
	return c == '^' || c == '*' || c== '/' || c == '+' || c=='-';
}

string convert(string s){

	stack<char> st;
	string res = "";

	for(auto c : s){

		if(c == '(') st.push(c);
		else if( c == ')') {
			while(st.top() != '('){
				res += st.top();
				st.pop();
			} st.pop();
		}
		else if(!isOperator(c)) res += c;
		else if(pre(st.top()) > pre(c)) res += st.top(), st.pop();
		else st.push(c);

	}

	return res;
}

string convertToPost(string str){

	stack<char> st;
	string res = "";

	for (int i = 0; i < str.length(); i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z') res += str[i];
		else{
		switch (str[i]){
		case '(':
			st.push(str[i]);
			break;
		case ')':
			while(!st.empty() && st.top()!='('){
				res += st.top();
				st.pop();
			}
			st.pop();
			break;
		default:
			if(pre(st.top()) < pre(str[i])) st.push(str[i]);
			else res += str[i];
			break;
		}
		}
	}

	return res;
	
}



int main() {
	
	string str = "(a-b/c)*(a/k-l)";
	cout << convert(str);
	
	return 0;
}