#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int N = 7; // 10^6
	int arr[] = { 1, 5, 3, 4, 3, 5, 6}; // 10^6
	int help[7] = {0};
	int mn = INT_MAX;

	for (int i = 0; i < N; i++)
		if(help[arr[i]])
			mn = min(mn, help[arr[i]]);
		else help[arr[i]] = i+1;
		
	if(mn == INT_MAX) cout << -1 << endl;
	cout << mn - 1 << endl;
	
	return 0;
}