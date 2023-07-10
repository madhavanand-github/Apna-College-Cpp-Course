#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int size = 10;
	int A[size] = {1, 3, 2, 3, 4, 2, 1, 1, 3, 2};

	int res = 0;
	
	// For each index
	for (int i = 0; i < 64; i++)
	{
		int sum = 0;
		// For every number
		for (int j = 0; j < size; j++)
			if(A[j] & 1<<i) sum++;
		if(sum%3) res = res | 1<<i;
	}
	
	cout << res << endl;
	return 0;
}