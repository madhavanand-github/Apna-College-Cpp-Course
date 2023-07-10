#include<bits/stdc++.h>
using namespace std;

void repPI(string str){

	if(str.length() == 0) return;

	if(str[0] == 'p' && str[1] == 'i') {
		cout << "3.14";
		repPI(str.substr(2));
	}
	else {
		cout << str[0];
		repPI(str.substr(1));
	}
		
}



int main() {
	
	repPI("pippxpiadfpip");
	
	return 0;
}