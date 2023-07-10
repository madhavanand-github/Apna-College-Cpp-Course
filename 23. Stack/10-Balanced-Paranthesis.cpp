#include<bits/stdc++.h>
using namespace std;

// Best Solution
bool isValid2(string s){

	stack<char> st;

	for(auto c:s){

		if(c=='(') st.push(')');
		else if(c=='[') st.push(']');
		else if(c=='{')	st.push('}');
		// "]()"
		else if(!st.empty() && st.top()==c) st.pop();
		else return false;
	}
	// "()["
	return st.empty();
}

// Best Solution - With 'if' only
bool isValid2_if(string s){

	stack<char> st;

	for(auto c:s){

		if(c=='('){
			st.push(')'); continue;
		} 
		if(c=='['){
			st.push(']'); continue;
		}
		if(c=='{'){
			st.push('}'); continue;
		} 
		if(!st.empty() && st.top() == c){
			st.pop(); continue;
		}
		else return false;

	}

	return st.empty();
}

// Best Solution - with switch
bool isValid2_switch(string s){

	stack<char> st;

	for(auto c:s){

		switch (c)
		{
		case '(':
			st.push(')');
			break;
		case '[':
			st.push(']');
			break;
		case '{':
			st.push('}');
			break;
		default:
			if(!st.empty() && st.top() == c) st.pop(); 
			else return false;
		}
	}

	return st.empty();
}

// Standard Solution
bool isValid(string s){

	stack<char> st;

	for(auto c : s){

		if(c == '(' || c == '[' || c == '{') st.push(c);
		else if(!st.empty()) {
			switch (c)
			{
			case ')':
				if(st.top() == '(') st.pop();
				break;
			case ']':
				if(st.top() == '[') st.pop();
				break;
			case '}':
				if(st.top() == '{') st.pop();
				break;
			}
		}
		else return false;
	}
	
	return st.empty();
}


int main() {
	
	// Leetcode Problem - 20 (Valid Paranthesis)
	string s = "{([])}";
	cout << (isValid(s) ? "Valid" : "Invalid") << endl;
	s = "{([]))";
	cout << (isValid(s) ? "Valid" : "Invalid") << endl;
	s = "(]";
	cout << (isValid(s) ? "Valid" : "Invalid") << endl;

	return 0;
}