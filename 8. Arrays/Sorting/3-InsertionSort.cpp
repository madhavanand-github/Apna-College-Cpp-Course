#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int arr[6] = {12, 45, 23, 51, 19, 8};
	int cur;

	for (int i = 1; i < 6; i++)
	{
		cur = arr[i];
		int j = i-1;
		while(j >= 0 && arr[j] > cur){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = cur;
	}	
	
	for(auto num : arr)
		cout << num << " ";
	
	return 0;
}