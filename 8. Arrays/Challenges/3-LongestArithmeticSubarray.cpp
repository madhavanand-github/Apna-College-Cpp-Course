#include<bits/stdc++.h>
using namespace std;

int main() {
	
	// int size = 12;
	// int arr[size] = {9, 7, 5, 3, 1, 100, 19, 9, 7, 5, 3, 42};

	int size = 7;
	int arr[size] = {10, 7, 4, 6, 8, 10, 11};
	
	int cur = 2;
	int ans = 0;
	
	for (int i = 2; i < size; i++){
		if(abs(arr[i-2] - arr[i-1]) == abs(arr[i-1] - arr[i]))
		cur += 1;
		else cur = 2;
		ans = max(ans, cur);
	}
		
	cout << ans;
	return 0;
}