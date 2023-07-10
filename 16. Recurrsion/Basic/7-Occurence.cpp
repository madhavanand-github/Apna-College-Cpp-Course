#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int size, int key, int i){

	// Base Case
	if(i==size) return -1;

	// Recursive Case
	if(arr[i] == key) return i;
	else firstOcc(arr, size, key, ++i);
}

int lastOcc(int arr[], int size, int key, int i){

	// Base Case
	if(i==size) return -1;

	// Recursive Case
	int restArray = lastOcc(arr, size, i+1, key);

	// Return Condition Check
	if(restArray != -1) return restArray;

	if(arr[i] == key) return i;
	return -1;
}

int main() {
	
	int arr[5] = {4, 2, 1, 2, 7};
	cout << firstOcc(arr, 5, 7, 0) << endl;
	
	return 0;
}