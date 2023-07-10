#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int N = 4;
	int arr[N] = { -1, 4, 7, 2};

	for (int i = 0; i < N; i++) // start	
		for (int j = i; j < N; j++){ // end
			for (int k = i; k <= j; k++) // traverse
				cout << arr[k] << " ";
		cout << endl;
		}
	
	return 0;
}