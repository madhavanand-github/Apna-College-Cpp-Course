#include<bits/stdc++.h>
using namespace std;

string remDup(string str){

	if(str.length() == 1) return "";

	char ch = str[0];
	string ans = remDup(str.substr(1));

	if(ch == ans[0]) return ans;

	return ch+ans;
	
}

int main() {
	
	
	
	return 0;
}