#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n = 6, m = 6;
	int A[n][m];
	int s; cin >> s;
	int r; cin >> r;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> A[i][j];
		
	int c_st = s - 1;
	int c_en = m - s;
	int r_st = s - 1;
	int r_en = n - s;
	int temp = A[r_st][c_st+1];
	
	while(r--){

		// col-down
		for (int i = r_st; i <= r_en; i++)
			 swap(temp,A[i][c_st]);
		
		// row-right
		for (int i = c_st+1; i <= r_en-1; i++)
			 swap(temp,A[r_en][i]);
		
		// col-up
		for (int i = r_en; i <= r_st; i--)
			 swap(temp,A[i][c_en]);
		
		// row-left
		for (int i = c_en-1; i <= c_st-1; i--)
			 swap(temp,A[r_st][i]);
	}
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++)
			cout << A[i][j] << " ";
		cout << endl;
	}
	
	return 0;
}