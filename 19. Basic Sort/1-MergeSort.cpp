#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int mid, int r){

	int n1 = mid - l + 1;
	int n2 = r - mid;

	int a[n1];
	int b[n2];

	for (int i = 0; i < n1; i++)
		a[i] = arr[l+i];
	
	for (int i = 0; i < n2; i++)
		b[i] = arr[l+i];

	
	
}

void mergeSort(int arr[], int l, int r){

	if(l < r){
		int mid = (l+r)/2;
		mergeSort(arr, l, mid);
		mergeSort(arr, mid + 1, r);
		merge(arr, l, mid, r);
	}
}

int main() {
	
	
	
	return 0;
}