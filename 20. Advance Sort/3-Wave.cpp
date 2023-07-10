#include<bits/stdc++.h>
using namespace std;


void wave(int arr[], int size){

	if(size < 2) return;

	for (int i = 1; i < size; i+=2) {
		if(arr[i] > arr[i-1]) swap(arr[i], arr[i-1]);
		if(arr[i] > arr[i+1] && i <= size-2) swap(arr[i], arr[i+1]);
	}
	
}

int main() {
	
	int arr[7] = {1, 3, 4, 7, 5, 6, 2};
	wave(arr,7);

	for (int i = 0; i < 7; i++)
		cout << arr[i] << " ";
	cout << endl;
	
	return 0;
}