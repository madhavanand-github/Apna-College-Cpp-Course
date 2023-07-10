#include<bits/stdc++.h>
using namespace std;

void strRev(string str){

	// Base Case
	// Can also use str.length()
	if(str[0] == '\0') return;

	// Recursive Case
	strRev(str.substr(1));
	cout << str[0] ;
}

int main() {
	
	strRev("Madhav");
	
	return 0;
}