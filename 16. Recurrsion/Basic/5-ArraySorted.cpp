#include<bits/stdc++.h>
using namespace std;

bool sorted(int arr[], int size){

	// Base Case
	if(size == 1) return true;

	// Recursive
	return (arr[0] < arr[1] && sorted(arr+1, size-1));
}

int main() {
	
	int arr[3] = {1, 2, 3};
	cout << sorted(arr, 3) << endl;
	
	int arr2[1] = {1};
	cout << sorted(arr2, 1) << endl;

	int arr3[3] = {1, 4 ,1};
	cout << sorted(arr3, 3) << endl;
	return 0;
}