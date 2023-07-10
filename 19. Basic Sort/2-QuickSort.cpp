#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int r){

	int pivotElement = arr[r];
	int i = l-1;
	for (int j = l; j < r; j++)
		if(arr[j] < pivotElement) swap(arr[++i], arr[j]);
	swap(arr[i+1], arr[r]);

	for(int i = l; i <= r; i++)
		cout << arr[i] << " ";
	cout << endl;

	return i+1;

}

void quickSort(int arr[], int l, int r){

	if(l < r){
		int pi = partition(arr, l, r);
		quickSort(arr, l, pi -1);
		quickSort(arr, pi+1, r);
	}
}

int main() {
	
	int arr[] = {6, 3, 9, 5, 2, 8, 7};
	quickSort(arr, 0, 7);
	
	for(auto element :arr)
		cout << element << " ";
	
	
	return 0;
}