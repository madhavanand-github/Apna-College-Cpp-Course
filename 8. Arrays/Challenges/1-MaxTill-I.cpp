#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int arr[6] = {1, 0, 5, 5, -6, -8};

	// Without using additional array
	
	// using if
	for (int i = 1; i < 6; i++)
		if((arr[i-1] >= arr[i])) arr[i] = arr[i-1];

	// using max
	for (int i = 1; i < 6; i++)
		arr[i] = max(arr[i-1], arr[i]);

	for(auto num : arr)
		cout << num << " ";
	cout << endl;

	// Using an additional array

	int arr2[6] = {1000, 0, 5, 5, -6, -8};
	int res[6];
	res[0] = arr2[0];

	// using if
	for (int i = 1; i < 6; i++)
		if(arr[i] > res[i-1]) res[i] = arr[i];
		else res[i] = res[i-1];

	// using max fxn
	for (int i = 1; i < 6; i++)
		res[i] = max(res[i-1], arr[i]);
	
	for(auto num : res)
		cout << num << " ";

	return 0;
}