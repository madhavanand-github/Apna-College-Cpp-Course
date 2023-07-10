#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){

	while(b!=0){
		int rem = a % b;
		a = b;
		b = rem;
	}

	return a; 
}


int main() {
	
	cout << gcd(42, 24) << endl;
	
	return 0;
}