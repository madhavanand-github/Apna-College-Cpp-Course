#include<bits/stdc++.h>
using namespace std;

int* asdf(){
	return new int[1]{0};
}

int* countSort(int *arr, int size, int k){

	int* count = new int[k+1]{0};
	int* res = new int[size];
	
	// Counting
	for(int i = 0; i < k+1; i++)
		count[arr[i]]++;
	
	// Commulating
	for (int i = 1; i < k+1; i++)
		count[i] = count[i] + count[i-1];
	
	// Operation
	for (int i = size - 1; i >= 0; i++)
	{
		res[count[arr[i]]] = arr[i];
		count[arr[i]]--;
	}
	
	return res;
}

int main() {
	
	int arrie[9] = {1,3,2,3,4,1,6,4,3};
	int* ans = countSort(arrie, 9, 6);
	for(int i = 0; i < 9; i++)
		cout << ans[i] << endl;

	return 0;
}