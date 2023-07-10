#include<bits/stdc++.h>
using namespace std;

int prefixEvaluate(string str){

	stack<int> st;

	for (int i = str.length() - 1; i >= 0; i--)
	{
		if(str[i] >= '0' && str[i] <= '9'){
			st.push(str[i]-'0');
		}
		else{
			int op1 = st.top();
			st.pop();
			int op2 = st.top();
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
			default:
				break;
			}
		}
	}

	return st.top();
	
}

int main() {
	
	string str = "-+7*45+20";
	cout << prefixEvaluate(str);
	
	return 0;
}