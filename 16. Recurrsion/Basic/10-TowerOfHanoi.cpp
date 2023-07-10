#include<bits/stdc++.h>
using namespace std;

void toh(int n, char src, char dest, char help){

	if(n == 0) return;

	// Move n-1 from src to helper using dest.
	toh(n-1, src, help, dest);
	cout << "Move from " << src << " to " << dest << endl;
	// Move n-1 from helper to dest. using src
	toh(n-1, help, dest, src);
}

int main() {
	
	toh(3, 'A', 'B', 'C');
	
	return 0;
}