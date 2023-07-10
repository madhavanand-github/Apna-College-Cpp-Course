#include<bits/stdc++.h>
using namespace std;

int main() {
	
	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{	
		char ch = str[i];
		if(ch > 'd'){
			str[i] = 'a' + (((ch + (ch%26)) - 'z') % 26) - 1;
		}
		else str[i] = ch + (ch%26);
	}
	
	cout << str;
	return 0;
}