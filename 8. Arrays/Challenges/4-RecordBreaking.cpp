#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int size = 8;
	int arr[size] = {1, 2, 0, 7, 2, 0, 2, 2};
	int mx[size] = {0};
	int maxi = mx[0];

	for (int i = 0; i < size; i++)
	{
		maxi = max(arr[i], maxi);
		mx[i] = maxi;
		if(i == 0 && arr[i] > arr[i+1]) cout << arr[i];
		else if(i == size-1 && arr[i] > mx[i-1]) cout << arr[i];
		else if(arr[i] > mx[i-1] && arr[i] > arr[i+1]) cout << arr[i];
	}
	
	return 0;
}