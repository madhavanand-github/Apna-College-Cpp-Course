#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int size = 6;
	int arr[size] = {12, 45, 23, 51, 19, 8};

	for (int i = 0; i < size; i++)
	{
		int minIndex = i;
		for (int j = i+1; j < 6; j++)
			minIndex = (arr[j] < arr[minIndex]) ? j : minIndex;
		swap(arr[i], arr[minIndex]);
	}
	
	for(auto num : arr)
		cout << num << endl;

	return 0;
} 