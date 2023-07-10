#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n = 3;
	int m = 3;
	int A[n][m] = {
		{1, 2, 3},
		{8, 9, 4},
		{7, 6, 5}
	};

	


	// The most optimized one
	for (int i = 0; i < n; i++)
		for (int j = i; j < m; j++)
			if(i!=j) swap(A[i][j], A[j][i]);
	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cout << A[i][j] << " "; 
		
	cout << endl;
	
	
	return 0;
}