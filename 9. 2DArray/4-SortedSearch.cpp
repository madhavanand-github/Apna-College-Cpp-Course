#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n = 4;
	int m = 4;
	int key = 5;

	int A[n][m] = {
		{1, 4, 7, 11},
		{2, 5, 8, 12},
		{3, 6, 9, 16},
		{10, 13, 14, 17}
	};
	
	// Top Right Position
	int r = 0, c = m - 1;

	while(r < n && c >= 0){

		if(A[r][c] == key) cout << "Found";
		if(key > A[r][c]) r++;
		else c--;
	}

	
	return 0;
}