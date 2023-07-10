#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int key){

	for (int i = 0; i < size; i++)
		if(arr[i] == key) return i;

	return -1;
}

int main() {
	
	int arr[4] = {1, 2, 3, 4};
	cout << linearSearch(arr, 4, 5) << endl;
	return 0;
}