#include<bits/stdc++.h>
using namespace std;

int binarySearchRecursive(int arr[], int start, int end, int key){

	if(start > end ) return -1;
	int mid = start + (end - start)/2;

	if(arr[mid] == key) return mid;

	if(arr[mid] > key) binarySearchRecursive(arr, 0, mid-1, key);
	else binarySearchRecursive(arr, mid+1, end, key);

}

int binarySearchIterative(int arr[], int size, int key){

	int start = 0;
	int end = size;
	int mid;
	
	while(start <= end){
		mid = start + (end - start)/2;

		if(arr[mid] == key) return mid;
		
		if(arr[mid] > key) end = mid - 1;
		else start = mid + 1;
	}

	return -1;
}

int main() {
	
	int arr[5] = {1, 2, 3, 4, 7};
	cout << binarySearchRecursive(arr, 0, 4, 7) << endl;
	
	return 0;
}