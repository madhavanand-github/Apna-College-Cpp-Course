#include<bits/stdc++.h>
using namespace std;

// Super Concise ✅
void dnf(int arr[], int size){

	int low = 0;
	int mid = 0;
	int high = size - 1;

	while (mid <= high){
		if(arr[mid] == 0) swap(arr[low++], arr[mid++]);
		if(arr[mid] == 1) mid++;
		if(arr[mid] == 2) swap(arr[mid], arr[high--]);
	}
	
}

int main() {
	
	int arr[10] = {1, 1, 2, 0, 0, 1, 2, 2, 1, 0};
	dnf(arr, 10);

	for (int i = 0; i < 10; i++)
		cout << arr[i] << " ";
	cout << endl;
	
	return 0;
}