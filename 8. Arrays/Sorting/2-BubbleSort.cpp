#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int arr[6] = {12, 45, 23, 51, 19, 8};

	for (int i = 5; i > 0; i--)
		for (int j = 0; j < i; j++)
			if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
	
	for(auto num : arr)
		cout << num << endl;

	return 0;
}