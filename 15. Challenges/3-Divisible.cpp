#include<bits/stdc++.h>
using namespace std;

int divisible(int n, int a, int b){

	return ((n/a + n/b) - (n/(a*b)));

}

int main() {
	
	cout << divisible(40, 5, 7);
	
	return 0;
}