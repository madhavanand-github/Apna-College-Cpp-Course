#include<bits/stdc++.h>
using namespace std;


int main() {
	
	int arr[4] = {1, 2, 3, 4};

	int min, max;
	min = max = arr[0];
	
	for(int num : arr){
		max = (num > max) ? num : max;
		min = (num < min) ? num : min;
	}
		
	cout << "Max " << max << "Min " << min << endl;
	
	return 0;
}