#include<bits/stdc++.h>
using namespace std;

float calc(float o1,float o2,char c)
{
    if(c=='+') return o1+o2;
    if(c=='-') return o1-o2;
    if(c=='*') return o1*o2;
    if(c=='/') return o1/o2;
    else return 0;
}

float postEval(string exp)
{
    float result=0;
    stack<int> s ;
    int dig = 0;
    int i=0;
    while(i<exp.length())
    {
        char e = exp[i];
        if(isdigit(exp[i])) {
            dig = dig*10 + (exp[i]-'0');
        } else if (exp[i] == ' ') {
            s.push(dig);
            dig = 0; 
        } else {
            float o2=s.top();
            s.pop();
            float o1=s.top();
            s.pop();
            result = calc(o1,o2,e);
            s.push(result);
            i++;

        }i++;
    }
    return s.top();
}

int eval(string s){

	stack<int> st;
	int num = 0, count = 1;
	for (int i = s.length()-1; i >= 0; i--)
	{	
		if(s[i] == ' '){
			st.push(num);
			count = 1;
			num = 0;
		} 
		else if(s[i] >= '0' || s[i]<='9') {
			num += (s[i] - '0') * count;
			count *= 10;
		} else {
			int op1 = st.top();
			st.pop();
			int op2 = st.top();
			st.pop();
			switch (s[i])
			{
			case '+':
				st.push(op1 + op2);
				--i;
				break;
			case '-':
				st.push(op1 + op2);
				--i;
				break;
			}
		}	
	}

	return st.top();
}

int main() {
	
	string s = "+ - 10 20 30";
	cout << eval(s) << endl;
	
	return 0;
}