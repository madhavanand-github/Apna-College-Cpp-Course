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

	int rowst = 0;
	int rowen = n;
	int colst = 0;
	int colen = m;
	
	while(rowst < rowen || colst < colen){

		// row -> 
		for (int i = colst; i < colen; i++)
		cout << A[rowst][i] << " ";
		rowst++;

		//  column |
		for (int i = rowst; i < rowen; i++)
			cout << A[i][colen-1] << " ";
		colen--;

		// row <-
		for (int i = colen-1; i >= colst; i--)
			cout << A[rowen-1][i] << " ";
		rowen--;

		for (int i = rowen; i >= rowst; i--)
			cout << A[i][colst] << " ";
		colst++;

	}
	
	
	return 0;
}