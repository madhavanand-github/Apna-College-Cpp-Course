#include<bits/stdc++.h>
using namespace std;

int postfixEvaluate(string str){

	stack<int> st;

	for (int i = 0; i < str.length(); i++)
	{
		if(str[i] >= '0' && str[i] <= '9'){
			st.push(str[i]-'0');
		}
		else{
			int op2 = st.top();
			st.pop();
			int op1 = st.top();
			st.pop();
			switch (str[i])
			{
			case '+':
				st.push(op1 + op2);
				break;
			case '-':
				st.push(op1 - op2);
				break;
			case '*':
				st.push(op1 * op2);
				break;
			case '/':
				st.push(op1 / op2);
				break;
			default:
				break;
			}
		}
	}

	return st.top();
	
}

int main() {
	
	string str = "46+2/5*7+";
	cout << postfixEvaluate(str);
	
	return 0;
}