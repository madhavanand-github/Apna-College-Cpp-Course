#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n1 = 2;
	int n2 = 3;
	int n3 = 2;
	
	int A[n1][n2] = { {1, 2, 3}, {4, 5, 6} };
	int B[n2][n3] = { {1, 2}, {3, 4}, {5, 6} };
	int C[n1][n3] = {0};

	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n3; j++)
		{
			for (int k = 0; k < n2; k++)
			{
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	
	
	for (int i = 0; i < n1; i++)
		for (int j = 0; j < n3; j++)
			cout << C[i][j] << " ";
	
	
	return 0;
}