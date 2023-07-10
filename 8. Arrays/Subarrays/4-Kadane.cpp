#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int N = 7;
	int arr[N] = { 4, 3, -2, 6, 7, -10, -10};

	int csum = arr[0];
	int bsum = arr[0];

	for (int i = 1; i < N; i++)
	{
		if(csum >= 0) csum += arr[i];
		else csum = arr[i];
		bsum = max(bsum, csum);
	}

	cout << bsum;
	
	return 0;
}